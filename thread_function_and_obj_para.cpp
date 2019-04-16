#include <iostream>
#include <thread>

using namespace std;

/*
(1)function as parameter to thread constructor
do_something();
std::thread my_thread(do_something);
(2)class object  as parameter to thread constructor
class background_task
{
  private:
  public:
    do_something();
    do_something_else();
};
background_task class_object;
std::thead my_thread(class_object); 

(3)std::thread my_thread((background_task()));
(4)std::thread my_thread{background_task()};

(5)using lamda expression
std::thread my_thread([](){
                   do_somthing();
		   do_something_else();
});

(6)wait for thread to finish
my_thread.join();

(7)leave it to run on its own
my_thread.detach();

(8)if your not decided above decisions before std::thread object is destroyed by call destructor std::terminate()

(9)a function returns while a thread has access to local variable 

struct func
{
  int& i;
  func(int& i_):i(i_){
  }
  void operator()()	
  {
    for(int j=0; j<10000;j++)
    {
        do_something(i);-->posibility to dangling pointer
    }
  }

};
void oops()
{
  int some_intial_state = 0;
  func my_func(some_initial_state);
  std::thread m_thread(my_func); //thread finished
  my_thread.detach(); //still accessing loacl 
}
(10) Waiting for a thread to finish
struct func;

void f()
{
   int some_local_state = 0;
   func my_func(some_loacal_state);
   std::thread my_thread(my_func);
   try
   {
     do_something_in_current_thread();
   }
   catch(...)
   {
     m_thread.join();
     throw;
   }
   my_thread.join();
(11) using RAII(Resource Aquisition is intialization)
class thread_guard
{
  std::thread& t;
  public:
    explicit thread_guard(std::thread& t_):t(t_)
    {}
    ~thread_guard()
    { 
      if(t.joinable()
      {
          t.join();
      }
   }
   thread_guard(thread_guard const&) = delete;
   thread_guard& operator=(thread_guard const&) = delete;
};

struct func;
void f()
{
  int some_local_state = 0;
  func my_func(some_local_state);
  std::thread my_thread(my_func);
  thread_guard(my_thread);
  do_something_in_current_thread();
}
(12) Running thread in the background   
 achive this:
  std::thread my_thread(do_something);
  my_thread.detach();
  assert(!joinable());
(13) passing arguments to thread function
 void foo(int i,std::string const& s);
 std::thread t(foo,3,"Hello");
 
 void foo(int i,std::string const& s);
 void oops(int some_param)
 {
    char buffer[1024];
    sprintf(buffer, "%i", some_param);
    std::thread t(foo,3,buffer);------>posibilty dangling pointer because function oops will exit before converting buffer to std::string
    //solution above issue is convert before passing to thread/
    //std::thread t(foo,3,std::string(buffer));
    t.detach();
 }
(14) 
void update_data_for_widget(widget_id w,widget_data& data);
void oops_again(widget_id w)
{
   widget_data data;
   //observe third parameter should be refernce type but we passing value internally it will copied and refernce to copied data will passed once function will come out of function data will be lost.
   std::thread t(update_data_for_widget,w,data);
//solution:std::thread(update_data_for_widget,w,std::ref(data));
   display_status();
   process_widget_data(data);
}
(15)
std::move->to transfer dynamic object into a thread.
void process_big_object(std::unique_ptr<big_object>;
std::unique_ptr<big_object> p(new big_object);
p->preparedata(42);
std::thread(process_big_object,std::move(p));
(16)
Transfering a ownership of a thread
pass ownership to new thread wait to complete.
std::fstream,std::move movable not copyable std::thread is one of them.

void some_function();
void some_other_function();
//ownership-->t1
std::thread t1(some_function);
//ownership moved from t1--->t2
std::thread t2=std::move(t1);
//new ownership assigned to t1
t1 = std::thread(some_othre_function);
t3=std::move(t2);
t1=std::move(t3);
std::thread t3
   
 
*/ 
  

extern "C" {
#include <ngx_config.h>
#include <ngx_core.h>
#include <ngx_http.h>
}


///

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "libplatform/libplatform.h"
//#include "v8.h"
#include <unistd.h>
#include <v8.h>
#include <libplatform/libplatform.h>
//#include "v8run.h"
#include <map>

using namespace std;
using namespace v8;
//#include "include/libplatform/libplatform.h"
//#include "include/v8.h"

using namespace v8;
static string runcode();
//int main(int argc, char* argv[]) {
  // Initialize V8.


//#include "include/v8.h"
//#include "v8js.h"
//#include "parser.h"



#define CODE ("code")
#define SESSION ("session")
//typedef map<string, V8Js* > V8JSMap;
//typedef V8JSMap::iterator V8JSMapIterator;

extern ngx_module_t ngx_http_v8_embed_module; //used if this file is not .c
#include <cstdlib>
#include <cstring>
#include <string>
#include <map>

#define HELLO_WORLD "how are you world222233343432"

static char *ngx_http_hello_world(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);
static ngx_int_t ngx_http_hello_world_handler(ngx_http_request_t *r);
static ngx_int_t ngx_http_v8_init_process(ngx_cycle_t *cycle);

typedef map<string, V8Run*> V8RunMap;
typedef V8RunMap::iterator V8JSMapIterator;

void weak_callback(const v8::WeakCallbackInfo<v8::Persistent<v8::String>>& data) {
  printf("Weak callback called\n");
  data.GetParameter()->Reset();
}

/**
 * This module provided directive: hello world.
 *
 */

static ngx_command_t ngx_http_hello_world_commands[] = {

    { ngx_string("hello_world"), /* directive */
      NGX_HTTP_LOC_CONF|NGX_CONF_NOARGS, /* location context and takes
                                            no arguments*/
      ngx_http_hello_world, /* configuration setup function */
      0, /* No offset. Only one context is supported. */
      0, /* No offset when storing the module configuration on struct. */
      NULL},

    ngx_null_command /* command termination */
};

/* The hello world string. */
static char* ngx_hello_world;
//static char* ngx_hello_world = "how are you world";

/* The module context. */
static ngx_http_module_t ngx_http_hello_world_module_ctx = {
    NULL, /* preconfiguration */
    NULL, /* postconfiguration */

    NULL, /* create main configuration */
    NULL, /* init main configuration */

    NULL, /* create server configuration */
    NULL, /* merge server configuration */

    NULL, /* create location configuration */
    NULL /* merge location configuration */
};

/* Module definition. */
ngx_module_t ngx_http_hello_world_module = {
    NGX_MODULE_V1,
    &ngx_http_hello_world_module_ctx, /* module context */
    ngx_http_hello_world_commands, /* module directives */
    NGX_HTTP_MODULE, /* module type */
    NULL, /* init master */
    NULL, /* init module */
    NULL, /* init process */
    NULL, /* init thread */
    NULL, /* exit thread */
    NULL, /* exit process */
    NULL, /* exit master */
    NGX_MODULE_V1_PADDING
};

Isolate* isolate;
ngx_int_t ngx_http_v8_init_process(ngx_cycle_t *cycle)
{


    ngx_core_conf_t         *ccf;
    ccf = reinterpret_cast<ngx_core_conf_t*>(ngx_get_conf(cycle->conf_ctx, ngx_core_module));
    return NGX_OK;
}


/**
 * Content handler.
 *
 * @param r
 *   Pointer to the request structure. See http_request.h.
 * @return
 *   The status of the response generation.
 */


bool first1 = true;
Local<Context> context;
static ngx_int_t ngx_http_hello_world_handler(ngx_http_request_t *r)
{
    ngx_buf_t *b;
    ngx_chain_t out;
// if(first1==true){
    // Initialize V8.
    v8::V8::InitializeICU();
    std::unique_ptr<v8::Platform> platform = v8::platform::NewDefaultPlatform();
    v8::V8::InitializePlatform(platform.get());
    V8::Initialize();
    v8::Isolate::CreateParams create_params;
    create_params.array_buffer_allocator = v8::ArrayBuffer::Allocator::NewDefaultAllocator();
    // Create a new Isolate and make it the current one.



    isolate = v8::Isolate::New(create_params);
    HandleScope handle_scope(isolate);
    // Create a new context.
    context = Context::New(isolate);
    // Enter the context for compiling and running the hello world script.
    Context::Scope context_scope(context);
    first1 =false;
//    }
    printf("test!!!\n");
    string aaa = runcode();
    char* chr = strdup(aaa.c_str());
    //ngx_hello_world= "afsdfsfsfsfasfsaff"+'\0u';
    ngx_hello_world= (u_char *) chr;
    //string rst = "(null)";
     #define ABCD "testetsetsetsetst";
   // ngx_hello_world = runcode();
    //rst = ngx_hello_world;
    /* Set the Content-Type header. */
    r->headers_out.content_type.len = sizeof("text/plain") - 1;
    r->headers_out.content_type.data = (u_char *) "text/plain";

    /* Allocate a new buffer for sending out the reply. */
    b = ngx_pcalloc(r->pool, sizeof(ngx_buf_t));

    /* Insertion in the buffer chain. */
    out.buf = b;
    out.next = NULL; /* just one buffer */
   
    b->pos = ngx_hello_world; /* first position in memory of the data */
    b->last = ngx_hello_world + strlen(ngx_hello_world); /* last position in memory of the data */
    b->memory = 1; /* content is in read-only memory */
    b->last_buf = 1; /* there will be no more buffers in the request */

    /* Sending the headers for the reply. */
    r->headers_out.status = NGX_HTTP_OK; /* 200 status code */
    /* Get the content length of the body. */
    r->headers_out.content_length_n = strlen(ngx_hello_world);
    ngx_http_send_header(r); /* Send the headers */

    /* Send the body, and return the status code of the output filter chain. */
    return ngx_http_output_filter(r, &out);
} /* ngx_http_hello_world_handler */

/**
 * Configuration setup function that installs the content handler.
 *
 * @param cf
 *   Module configuration structure pointer.
 * @param cmd
 *   Module directives structure pointer.
 * @param conf
 *   Module configuration structure pointer.
 * @return string
 *   Status of the configuration setup.
 */
static char *ngx_http_hello_world(ngx_conf_t *cf, ngx_command_t *cmd, void *conf)
{

    ngx_http_core_loc_conf_t *clcf; /* pointer to core location configuration */

    /* Install the hello world handler. */
    clcf = ngx_http_conf_get_module_loc_conf(cf, ngx_http_core_module);
    clcf->handler = ngx_http_hello_world_handler;
    return NGX_CONF_OK;
} /* ngx_http_hello_world */

//const char* ToCString(Local<String> str) {
//  String::Utf8Value value(str);
//  return *value ? *value : "<string conversion failed>";
//}

// Extracts a C string from a V8 Utf8Value.
const char* ToCString(const v8::String::Utf8Value& value) {
  return *value ? *value : "<string conversion failed>";
}


//V8JSMap mapV8;
//V8Js* curV8;
/*
V8Js* getCurV8(string sessionID){
        V8JSMapIterator it = mapV8.find(sessionID);
        //if exists, return
        if(it != mapV8.end()){
                return (V8Js*)(it->second);
        }
        //else create a new v8js
        else {
                V8Js* v8 = new V8Js();
                mapV8.insert(V8JSMap::value_type(sessionID,v8));
                v8->initMigrator();     //init Migrator code
                return v8;
        }
}
*/



string code1="var component_ekaDIrW=function component_ekaDIrW(input) { var id = input; var BROKERS = [{ id: 1,               firstName:  \"Caroline \",          lastName:  \"Kingsley \",           title:  \"Senior Broker \",                 phone:  \"617-244-3672 \",          mobilePhone:  \"617-244-3672 \",            email:  \"caroline@ionicrealty.com \",              picture:  \ \"img/1.jpg \"          }, {                id: 2,          firstName:  \"Michael \",               lastName:  \"Jones \",          title:  \"Senior Broker \",             phone:  \"617-244-3672 \",              mobilePhone:  \"617-244-3672 \",                email:  \"michael@ionicrealty.com \",           picture:  \"img/2.jpg \"            }, {                id: 3,          firstName:  \"Jonathan \",              lastName:  \"Bradley \",                title:  \"Senior Broker \",             phone:  \"617-244-3672 \",              mobilePhone:  \"617-244-3672 \",                email:  \"jonathan@ionicrealty.com \",          picture:  \"img/3.jpg \"            }, {                id: 4,          firstName:  \"Jennifer \",              lastName:  \"Wu \",             title:  \"Senior Broker \",             phone:  \"617-244-3672 \",              mobilePhone:  \"617-244-3672 \",                email:  \"jen@ionicrealty.com \",               picture:  \"img/4.jpg \"            }, {                id: 5,          firstName:  \"Olivia \",                lastName:  \"Green \",          title:  \"Senior Broker \",             phone:  \"617-244-3672 \",              mobilePhone:  \"617-244-3672 \",                email:  \"olivia@ionicrealty.com \",            picture:  \"img/5.jpg \"            }, {                id: 6,          firstName:  \"Miriam \",                lastName:  \"Aupont \",                 title:  \"Senior Broker \",             phone:  \"617-244-3672 \",              mobilePhone:  \"617-244-3672 \",                email:  \"miriam@ionicrealty.com \",            picture:  \"img/6.jpg \"            }, {                id: 7,          firstName:  \"Michelle \",              lastName:  \"Lambert \",                title:  \"Senior Broker \",             phone:  \"617-244-3672 \",              mobilePhone:  \"617-244-3672 \",                email:  \"michelle@ionicrealty.com \",          picture:  \"img/7.jpg \"            }, {                id: 8,          firstName:  \"Victor \",                lastName:  \"Ochoa \",          title:  \"Senior Broker \",             phone:  \"617-244-3672 \",              mobilePhone:  \"617-244-3672 \",                email:  \"victor@ionicrealty.com \",            picture:  \"img/8.jpg \"            }];             var TempV1 = id - 1;            var TempV0 = BROKERS[TempV1];           var output = TempV0;            return output;      }; component_ekaDIrW(1);";

string code2="function component_ekaDIrW(input) {\n\t    var id = input;\n\t    //var BROKERS = require('./TdksdD').data;\n\t    var BROKERS = [{\n\t        id: 1,\n\t        firstName: \"Caroline\",\n\t        lastName: \"Kingsley\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"caroline@ionicrealty.com\",\n\t        picture: \"img/1.jpg\"\n\t    }, {\n\t        id: 2,\n\t        firstName: \"Michael\",\n\t        lastName: \"Jones\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"michael@ionicrealty.com\",\n\t        picture: \"img/2.jpg\"\n\t    }, {\n\t        id: 3,\n\t        firstName: \"Jonathan\",\n\t        lastName: \"Bradley\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"jonathan@ionicrealty.com\",\n\t        picture: \"img/3.jpg\"\n\t    }, {\n\t        id: 4,\n\t        firstName: \"Jennifer\",\n\t        lastName: \"Wu\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"jen@ionicrealty.com\",\n\t        picture: \"img/4.jpg\"\n\t    }, {\n\t        id: 5,\n\t        firstName: \"Olivia\",\n\t        lastName: \"Green\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"olivia@ionicrealty.com\",\n\t        picture: \"img/5.jpg\"\n\t    }, {\n\t        id: 6,\n\t        firstName: \"Miriam\",\n\t        lastName: \"Aupont\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"miriam@ionicrealty.com\",\n\t        picture: \"img/6.jpg\"\n\t    }, {\n\t        id: 7,\n\t        firstName: \"Michelle\",\n\t        lastName: \"Lambert\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"michelle@ionicrealty.com\",\n\t        picture: \"img/7.jpg\"\n\t    }, {\n\t        id: 8,\n\t        firstName: \"Victor\",\n\t        lastName: \"Ochoa\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"victor@ionicrealty.com\",\n\t        picture: \"img/8.jpg\"\n\t    }];\n\t    var TempV1 = id - 1;\n\t    var TempV0 = BROKERS[TempV1];\n\t    var output = TempV0;\n\t    return output;\n\t}";

bool first = true;
static string runcode(){

  string str_val;
//  {

//    Isolate::Scope isolate_scope(isolate);
    // Create a stack-allocated handle scope.
    //test.Reset(isolate, String::NewFromUtf8(isolate, "Hello' + ', World!'"));
    //test.SetWeak(&test, weak_callback, v8::WeakCallbackType::kParameter);


    // Create a string containing the JavaScript source code.
   //"function component_ekaDIrW_BL() {\n\t    //var BROKERS = require('./BYUhqg').data;\n\t    var BROKERS = [{\n\t        id: 1,\n\t        firstName: \"Caroline\",\n\t        lastName: \"Kingsley\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"caroline@ionicrealty.com\",\n\t        picture: \"img/1.jpg\"\n\t    }, {\n\t        id: 2,\n\t        firstName: \"Michael\",\n\t        lastName: \"Jones\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"michael@ionicrealty.com\",\n\t        picture: \"img/2.jpg\"\n\t    }, {\n\t        id: 3,\n\t        firstName: \"Jonathan\",\n\t        lastName: \"Bradley\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"jonathan@ionicrealty.com\",\n\t        picture: \"img/3.jpg\"\n\t    }, {\n\t        id: 4,\n\t        firstName: \"Jennifer\",\n\t        lastName: \"Wu\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"jen@ionicrealty.com\",\n\t        picture: \"img/4.jpg\"\n\t    }, {\n\t        id: 5,\n\t        firstName: \"Olivia\",\n\t        lastName: \"Green\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"olivia@ionicrealty.com\",\n\t        picture: \"img/5.jpg\"\n\t    }, {\n\t        id: 6,\n\t        firstName: \"Miriam\",\n\t        lastName: \"Aupont\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"miriam@ionicrealty.com\",\n\t        picture: \"img/6.jpg\"\n\t    }, {\n\t        id: 7,\n\t        firstName: \"Michelle\",\n\t        lastName: \"Lambert\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"michelle@ionicrealty.com\",\n\t        picture: \"img/7.jpg\"\n\t    }, {\n\t        id: 8,\n\t        firstName: \"Victor\",\n\t        lastName: \"Ochoa\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"victor@ionicrealty.com\",\n\t        picture: \"img/8.jpg\"\n\t    }];\n\t\n\t    var output = BROKERS;\n\t    return output;\n\t}"



char* csource;
if(first==true){
csource = R"(
    var __VARIABLES__=eval("var sum=0; function add(){sum++;}; add(); add(); sum;"); var __RESPONSE__;__RESPONSE__=JSON.stringify(__VARIABLES__)
  )";
        first =false;
}else{

	csource = R"(
        var __VARIABLES__=eval("var sum=0; function add(){sum++;}; add(); add(); add(); sum;"); var __RESPONSE__;__RESPONSE__=JSON.stringify(__VARIABLES__)
      )";

}

    //  string csource1 = "var __VARIABLES__=eval("+code2+"); var __RESPONSE__;__RESPONSE__=JSON.stringify(__VARIABLES__);";
    //const char* csource = strdup(csource1);
      // Create a string containing the JavaScript source code.
      v8::Local<v8::String> source =
          v8::String::NewFromUtf8(isolate, csource, v8::NewStringType::kNormal)
              .ToLocalChecked();

      // Compile the source code.
      v8::Local<v8::Script> script =
          v8::Script::Compile(context, source).ToLocalChecked();

      // Run the script to get the result.
      v8::Local<v8::Value> result = script->Run(context).ToLocalChecked();
      
      //v8::String::Value utf8(isolate, result);
      //v8::String::AsciiValue ascii(result);
    // Convert the result to an UTF8 string and print it.
    String::Utf8Value utf8(isolate, result);
    //string str_val(result);

//    str_val="Helloooo";
    str_val=*utf8;
    //aaa=*utf8;
    //sprintf(aaa,"%s\n", *utf8);
    //aaa = *utf8+'\0';
    //aaa= ToCString(result);
    //aaa="{aaa:fafsaf}";
	//rst=*utf8;
	//rst = aaa;
//  }

  //isolate->LowMemoryNotification();



  //Dispose the isolate and tear down V8.
  isolate->Dispose();
  V8::Dispose();
  V8::ShutdownPlatform();
   
  return str_val;
}

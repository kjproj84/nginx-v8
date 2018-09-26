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

/**
 * Content handler.
 *
 * @param r
 *   Pointer to the request structure. See http_request.h.
 * @return
 *   The status of the response generation.
 */
static ngx_int_t ngx_http_hello_world_handler(ngx_http_request_t *r)
{
    ngx_buf_t *b;
    ngx_chain_t out;

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


string code1="var component_ekaDIrW=function component_ekaDIrW(input) { var id = input; var BROKERS = [{ id: 1,               firstName:  \"Caroline \",          lastName:  \"Kingsley \",           title:  \"Senior Broker \",                 phone:  \"617-244-3672 \",          mobilePhone:  \"617-244-3672 \",            email:  \"caroline@ionicrealty.com \",              picture:  \ \"img/1.jpg \"          }, {                id: 2,          firstName:  \"Michael \",               lastName:  \"Jones \",          title:  \"Senior Broker \",             phone:  \"617-244-3672 \",              mobilePhone:  \"617-244-3672 \",                email:  \"michael@ionicrealty.com \",           picture:  \"img/2.jpg \"            }, {                id: 3,          firstName:  \"Jonathan \",              lastName:  \"Bradley \",                title:  \"Senior Broker \",             phone:  \"617-244-3672 \",              mobilePhone:  \"617-244-3672 \",                email:  \"jonathan@ionicrealty.com \",          picture:  \"img/3.jpg \"            }, {                id: 4,          firstName:  \"Jennifer \",              lastName:  \"Wu \",             title:  \"Senior Broker \",             phone:  \"617-244-3672 \",              mobilePhone:  \"617-244-3672 \",                email:  \"jen@ionicrealty.com \",               picture:  \"img/4.jpg \"            }, {                id: 5,          firstName:  \"Olivia \",                lastName:  \"Green \",          title:  \"Senior Broker \",             phone:  \"617-244-3672 \",              mobilePhone:  \"617-244-3672 \",                email:  \"olivia@ionicrealty.com \",            picture:  \"img/5.jpg \"            }, {                id: 6,          firstName:  \"Miriam \",                lastName:  \"Aupont \",                 title:  \"Senior Broker \",             phone:  \"617-244-3672 \",              mobilePhone:  \"617-244-3672 \",                email:  \"miriam@ionicrealty.com \",            picture:  \"img/6.jpg \"            }, {                id: 7,          firstName:  \"Michelle \",              lastName:  \"Lambert \",                title:  \"Senior Broker \",             phone:  \"617-244-3672 \",              mobilePhone:  \"617-244-3672 \",                email:  \"michelle@ionicrealty.com \",          picture:  \"img/7.jpg \"            }, {                id: 8,          firstName:  \"Victor \",                lastName:  \"Ochoa \",          title:  \"Senior Broker \",             phone:  \"617-244-3672 \",              mobilePhone:  \"617-244-3672 \",                email:  \"victor@ionicrealty.com \",            picture:  \"img/8.jpg \"            }];             var TempV1 = id - 1;            var TempV0 = BROKERS[TempV1];           var output = TempV0;            return output;      }; component_ekaDIrW(1);";

string code2="function component_ekaDIrW(input) {\n\t    var id = input;\n\t    //var BROKERS = require('./TdksdD').data;\n\t    var BROKERS = [{\n\t        id: 1,\n\t        firstName: \"Caroline\",\n\t        lastName: \"Kingsley\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"caroline@ionicrealty.com\",\n\t        picture: \"img/1.jpg\"\n\t    }, {\n\t        id: 2,\n\t        firstName: \"Michael\",\n\t        lastName: \"Jones\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"michael@ionicrealty.com\",\n\t        picture: \"img/2.jpg\"\n\t    }, {\n\t        id: 3,\n\t        firstName: \"Jonathan\",\n\t        lastName: \"Bradley\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"jonathan@ionicrealty.com\",\n\t        picture: \"img/3.jpg\"\n\t    }, {\n\t        id: 4,\n\t        firstName: \"Jennifer\",\n\t        lastName: \"Wu\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"jen@ionicrealty.com\",\n\t        picture: \"img/4.jpg\"\n\t    }, {\n\t        id: 5,\n\t        firstName: \"Olivia\",\n\t        lastName: \"Green\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"olivia@ionicrealty.com\",\n\t        picture: \"img/5.jpg\"\n\t    }, {\n\t        id: 6,\n\t        firstName: \"Miriam\",\n\t        lastName: \"Aupont\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"miriam@ionicrealty.com\",\n\t        picture: \"img/6.jpg\"\n\t    }, {\n\t        id: 7,\n\t        firstName: \"Michelle\",\n\t        lastName: \"Lambert\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"michelle@ionicrealty.com\",\n\t        picture: \"img/7.jpg\"\n\t    }, {\n\t        id: 8,\n\t        firstName: \"Victor\",\n\t        lastName: \"Ochoa\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"victor@ionicrealty.com\",\n\t        picture: \"img/8.jpg\"\n\t    }];\n\t    var TempV1 = id - 1;\n\t    var TempV0 = BROKERS[TempV1];\n\t    var output = TempV0;\n\t    return output;\n\t}";

static string runcode(){
  // Initialize V8.
  v8::V8::InitializeICU();
  //v8::Platform *platform = v8::platform::CreateDefaultPlatform();
  //v8::V8::InitializePlatform(platform);
// string rst = "(null)";
  std::unique_ptr<v8::Platform> platform = v8::platform::NewDefaultPlatform();
  v8::V8::InitializePlatform(platform.get());

  V8::Initialize();
char* aaa = "tset";
string str_val;
  v8::Isolate::CreateParams create_params;
  create_params.array_buffer_allocator = v8::ArrayBuffer::Allocator::NewDefaultAllocator();

  // Create a new Isolate and make it the current one.
  Isolate* isolate = v8::Isolate::New(create_params);

  v8::Persistent<v8::String> test;

  {
    Isolate::Scope isolate_scope(isolate);

    // Create a stack-allocated handle scope.
  HandleScope handle_scope(isolate);

    // Create a new context.
  Local<Context> context = Context::New(isolate);

    // Enter the context for compiling and running the hello world script.
    Context::Scope context_scope(context);


    //test.Reset(isolate, String::NewFromUtf8(isolate, "Hello' + ', World!'"));
    //test.SetWeak(&test, weak_callback, v8::WeakCallbackType::kParameter);


    // Create a string containing the JavaScript source code.
   //"function component_ekaDIrW_BL() {\n\t    //var BROKERS = require('./BYUhqg').data;\n\t    var BROKERS = [{\n\t        id: 1,\n\t        firstName: \"Caroline\",\n\t        lastName: \"Kingsley\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"caroline@ionicrealty.com\",\n\t        picture: \"img/1.jpg\"\n\t    }, {\n\t        id: 2,\n\t        firstName: \"Michael\",\n\t        lastName: \"Jones\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"michael@ionicrealty.com\",\n\t        picture: \"img/2.jpg\"\n\t    }, {\n\t        id: 3,\n\t        firstName: \"Jonathan\",\n\t        lastName: \"Bradley\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"jonathan@ionicrealty.com\",\n\t        picture: \"img/3.jpg\"\n\t    }, {\n\t        id: 4,\n\t        firstName: \"Jennifer\",\n\t        lastName: \"Wu\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"jen@ionicrealty.com\",\n\t        picture: \"img/4.jpg\"\n\t    }, {\n\t        id: 5,\n\t        firstName: \"Olivia\",\n\t        lastName: \"Green\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"olivia@ionicrealty.com\",\n\t        picture: \"img/5.jpg\"\n\t    }, {\n\t        id: 6,\n\t        firstName: \"Miriam\",\n\t        lastName: \"Aupont\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"miriam@ionicrealty.com\",\n\t        picture: \"img/6.jpg\"\n\t    }, {\n\t        id: 7,\n\t        firstName: \"Michelle\",\n\t        lastName: \"Lambert\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"michelle@ionicrealty.com\",\n\t        picture: \"img/7.jpg\"\n\t    }, {\n\t        id: 8,\n\t        firstName: \"Victor\",\n\t        lastName: \"Ochoa\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"victor@ionicrealty.com\",\n\t        picture: \"img/8.jpg\"\n\t    }];\n\t\n\t    var output = BROKERS;\n\t    return output;\n\t}"


/** works    
	const char* csource = R"(

        var __VARIABLES__=eval("var component_ekaDIrW=function component_ekaDIrW(input) {\n\t    var id = input;\n\t    //var BROKERS = require('./TdksdD').data;\n\t    var BROKERS = [{\n\t        id: 1,\n\t        firstName: \"Caroline\",\n\t        lastName: \"Kingsley\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"caroline@ionicrealty.com\",\n\t        picture: \"img/1.jpg\"\n\t    }, {\n\t        id: 2,\n\t        firstName: \"Michael\",\n\t        lastName: \"Jones\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"michael@ionicrealty.com\",\n\t        picture: \"img/2.jpg\"\n\t    }, {\n\t        id: 3,\n\t        firstName: \"Jonathan\",\n\t        lastName: \"Bradley\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"jonathan@ionicrealty.com\",\n\t        picture: \"img/3.jpg\"\n\t    }, {\n\t        id: 4,\n\t        firstName: \"Jennifer\",\n\t        lastName: \"Wu\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"jen@ionicrealty.com\",\n\t        picture: \"img/4.jpg\"\n\t    }, {\n\t        id: 5,\n\t        firstName: \"Olivia\",\n\t        lastName: \"Green\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"olivia@ionicrealty.com\",\n\t        picture: \"img/5.jpg\"\n\t    }, {\n\t        id: 6,\n\t        firstName: \"Miriam\",\n\t        lastName: \"Aupont\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"miriam@ionicrealty.com\",\n\t        picture: \"img/6.jpg\"\n\t    }, {\n\t        id: 7,\n\t        firstName: \"Michelle\",\n\t        lastName: \"Lambert\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"michelle@ionicrealty.com\",\n\t        picture: \"img/7.jpg\"\n\t    }, {\n\t        id: 8,\n\t        firstName: \"Victor\",\n\t        lastName: \"Ochoa\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"victor@ionicrealty.com\",\n\t        picture: \"img/8.jpg\"\n\t    }];\n\t    var TempV1 = id - 1;\n\t    var TempV0 = BROKERS[TempV1];\n\t    var output = TempV0;\n\t    return output;\n\t}; component_ekaDIrW(1);"); var __RESPONSE__;__RESPONSE__=JSON.stringify(__VARIABLES__)
      )";
**/
/** works
    const char* csource = R"(

        var __VARIABLES__=eval("var component_ekaDIrW_BL=function component_ekaDIrW_BL() {\n\t    //var BROKERS = require('./BYUhqg').data;\n\t    var BROKERS = [{\n\t        id: 1,\n\t        firstName: \"Caroline\",\n\t        lastName: \"Kingsley\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"caroline@ionicrealty.com\",\n\t        picture: \"img/1.jpg\"\n\t    }, {\n\t        id: 2,\n\t        firstName: \"Michael\",\n\t        lastName: \"Jones\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"michael@ionicrealty.com\",\n\t        picture: \"img/2.jpg\"\n\t    }, {\n\t        id: 3,\n\t        firstName: \"Jonathan\",\n\t        lastName: \"Bradley\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"jonathan@ionicrealty.com\",\n\t        picture: \"img/3.jpg\"\n\t    }, {\n\t        id: 4,\n\t        firstName: \"Jennifer\",\n\t        lastName: \"Wu\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"jen@ionicrealty.com\",\n\t        picture: \"img/4.jpg\"\n\t    }, {\n\t        id: 5,\n\t        firstName: \"Olivia\",\n\t        lastName: \"Green\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"olivia@ionicrealty.com\",\n\t        picture: \"img/5.jpg\"\n\t    }, {\n\t        id: 6,\n\t        firstName: \"Miriam\",\n\t        lastName: \"Aupont\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"miriam@ionicrealty.com\",\n\t        picture: \"img/6.jpg\"\n\t    }, {\n\t        id: 7,\n\t        firstName: \"Michelle\",\n\t        lastName: \"Lambert\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"michelle@ionicrealty.com\",\n\t        picture: \"img/7.jpg\"\n\t    }, {\n\t        id: 8,\n\t        firstName: \"Victor\",\n\t        lastName: \"Ochoa\",\n\t        title: \"Senior Broker\",\n\t        phone: \"617-244-3672\",\n\t        mobilePhone: \"617-244-3672\",\n\t        email: \"victor@ionicrealty.com\",\n\t        picture: \"img/8.jpg\"\n\t    }];\n\t\n\t    var output = BROKERS;\n\t    return output;\n\t}; component_ekaDIrW_BL();"); var __RESPONSE__;__RESPONSE__=JSON.stringify(__VARIABLES__)
      )";
**/
/** done
const char* csource = R"(

        var __VARIABLES__=eval("var component_ekaDIrW_fav=function component_ekaDIrW_fav() {\n\t  var favorites = [];\n\t  var output = favorites;\n\t  return output;\n\t}; component_ekaDIrW_fav();"); var __RESPONSE__;__RESPONSE__=JSON.stringify(__VARIABLES__)
      )";
**/

/**done
    const char* csource = R"(

        var __VARIABLES__=eval("var component_ekaDIrW_PL=function component_ekaDIrW_PL() {\n\t    var PROPERTIES = [{\n\t        id: 1,\n\t        city: 'Boston',\n\t        state: 'MA',\n\t        price: '$475,000',\n\t        title: 'Condominium Redefined',\n\t        beds: 2,\n\t        baths: 2,\n\t        likes: 5,\n\t        broker: {\n\t            id: 1,\n\t            name: \"Caroline Kingsley\",\n\t            title: \"Senior Broker\",\n\t            picture: \"img1/1.jpg\"\n\t        },\n\t        pic: 'img1/2.jpg',\n\t        thumb: 'img1/3.jpg',\n\t        description: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad.'\n\t    }, {\n\t        id: 2,\n\t        city: 'Cambridge',\n\t        state: 'MA',\n\t        price: '$1,200,000',\n\t        title: 'Ultimate Sophistication',\n\t        beds: 5,\n\t        baths: 4,\n\t        likes: 2,\n\t        broker: {\n\t            id: 2,\n\t            name: \"Michael Jones\",\n\t            title: \"Senior Broker\",\n\t            picture: \"img1/4.jpg\"\n\t        },\n\t        pic: 'img1/5.jpg',\n\t        thumb: 'img1/6.jpg',\n\t        description: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad.'\n\t    }, {\n\t        id: 3,\n\t        city: 'Boston',\n\t        state: 'MA',\n\t        price: '$650,000',\n\t        title: 'Seaport District Retreat',\n\t        beds: 3,\n\t        baths: 2,\n\t        likes: 6,\n\t        broker: {\n\t            id: 3,\n\t            name: \"Jonathan Bradley\",\n\t            title: \"Senior Broker\",\n\t            picture: \"img1/7.jpg\"\n\t        },\n\t        pic: 'img1/8.jpg',\n\t        thumb: 'img1/9.jpg',\n\t        description: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad.'\n\t    }, {\n\t        id: 4,\n\t        city: 'Boston',\n\t        state: 'MA',\n\t        price: '$875,000',\n\t        title: 'Modern City Living',\n\t        beds: 3,\n\t        baths: 2,\n\t        likes: 12,\n\t        broker: {\n\t            id: 4,\n\t            name: \"Jennifer Wu\",\n\t            title: \"Senior Broker\",\n\t            picture: \"img1/10.jpg\"\n\t        },\n\t        pic: 'img1/11.jpg',\n\t        thumb: 'img1/12.jpg',\n\t        description: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad.'\n\t    }, {\n\t        id: 5,\n\t        city: 'Boston',\n\t        state: 'MA',\n\t        zip: '02420',\n\t        price: '$425,000',\n\t        title: 'Urban Efficiency',\n\t        beds: 4,\n\t        baths: 2,\n\t        likes: 5,\n\t        broker: {\n\t            id: 5,\n\t            name: \"Olivia Green\",\n\t            title: \"Senior Broker\",\n\t            picture: \"img1/13.jpg\"\n\t        },\n\t        pic: 'img1/14.jpg',\n\t        thumb: 'img1/15.jpg',\n\t        description: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad.'\n\t    }, {\n\t        id: 6,\n\t        city: 'Boston',\n\t        state: 'MA',\n\t        price: '$550,000',\n\t        title: 'Waterfront in the City',\n\t        beds: 3,\n\t        baths: 2,\n\t        likes: 14,\n\t        broker: {\n\t            id: 6,\n\t            name: \"Miriam Aupont\",\n\t            title: \"Senior Broker\",\n\t            picture: \"img1/16.jpg\"\n\t        },\n\t        pic: 'img1/17.jpg',\n\t        thumb: 'img1/18.jpg',\n\t        description: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad.'\n\t    }, {\n\t        id: 7,\n\t        city: 'Brookline',\n\t        state: 'MA',\n\t        zip: '02420',\n\t        price: '$850,000',\n\t        title: 'Suburban Extravaganza',\n\t        beds: 5,\n\t        baths: 4,\n\t        likes: 5,\n\t        broker: {\n\t            id: 7,\n\t            name: \"Michelle Lambert\",\n\t            title: \"Senior Broker\",\n\t            picture: \"img1/19.jpg\"\n\t        },\n\t        pic: 'img1/20.jpg',\n\t        thumb: 'img1/21.jpg',\n\t        description: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad.'\n\t    }, {\n\t        id: 8,\n\t        city: 'Boston',\n\t        state: 'MA',\n\t        zip: '02420',\n\t        price: '$925,000',\n\t        title: 'Contemporary Luxury',\n\t        beds: 6,\n\t        baths: 6,\n\t        sqft: 950,\n\t        likes: 8,\n\t        broker: {\n\t            id: 8,\n\t            name: \"Victor Oachoa\",\n\t            title: \"Senior Broker\",\n\t            picture: \"img1/22.jpg\"\n\t        },\n\t        pic: 'img1/23.jpg',\n\t        thumb: 'img1/24.jpg',\n\t        description: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad.'\n\t    }, {\n\t        id: 9,\n\t        city: 'Cambridge',\n\t        state: 'MA',\n\t        zip: '02420',\n\t        price: '$550,000',\n\t        title: 'Heart of Harvard Square',\n\t        beds: 5,\n\t        baths: 4,\n\t        likes: 9,\n\t        broker: {\n\t            id: 1,\n\t            name: \"Caroline Kingsley\",\n\t            title: \"Senior Broker\",\n\t            picture: \"img1/1.jpg\"\n\t        },\n\t        pic: 'img1/25.jpg',\n\t        thumb: 'img1/26.jpg',\n\t        description: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad.'\n\t    }, {\n\t        id: 10,\n\t        city: 'Boston',\n\t        state: 'MA',\n\t        zip: '02420',\n\t        price: '$375,000',\n\t        title: 'Architectural Details',\n\t        beds: 2,\n\t        baths: 2,\n\t        likes: 10,\n\t        broker: {\n\t            id: 2,\n\t            name: \"Michael Jones\",\n\t            title: \"Senior Broker\",\n\t            picture: \"img1/4.jpg\"\n\t        },\n\t        pic: 'img1/27.jpg',\n\t        thumb: 'img1/28.jpg',\n\t        description: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad.'\n\t    }, {\n\t        id: 11,\n\t        city: 'Boston',\n\t        state: 'MA',\n\t        zip: '02420',\n\t        price: '$495,000',\n\t        title: 'Modern Elegance',\n\t        beds: 2,\n\t        baths: 2,\n\t        likes: 16,\n\t        broker: {\n\t            id: 3,\n\t            name: \"Jonathan Bradley\",\n\t            title: \"Senior Broker\",\n\t            picture: \"img1/7.jpg\"\n\t        },\n\t        pic: 'img1/29.jpg',\n\t        thumb: 'img1/30.jpg',\n\t        description: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad.'\n\t    }, {\n\t        id: 12,\n\t        city: 'Boston',\n\t        state: 'MA',\n\t        zip: '02420',\n\t        price: '$625,000',\n\t        title: 'Stunning Colonial',\n\t        beds: 4,\n\t        baths: 2,\n\t        likes: 9,\n\t        broker: {\n\t            id: 4,\n\t            name: \"Jennifer Wu\",\n\t            title: \"Senior Broker\",\n\t            picture: \"img1/10.jpg\"\n\t        },\n\t        pic: 'img1/31.jpg',\n\t        thumb: 'img1/32.jpg',\n\t        description: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad.'\n\t    }, {\n\t        id: 13,\n\t        city: 'Cambridge',\n\t        state: 'MA',\n\t        zip: '02420',\n\t        price: '$430,000',\n\t        title: 'Quiet Retreat',\n\t        beds: 5,\n\t        baths: 4,\n\t        likes: 18,\n\t        broker: {\n\t            id: 5,\n\t            name: \"Olivia Green\",\n\t            title: \"Senior Broker\",\n\t            picture: \"img1/13.jpg\"\n\t        },\n\t        pic: 'img1/33.jpg',\n\t        thumb: 'img1/34.jpg',\n\t        description: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad.'\n\t    }, {\n\t        id: 14,\n\t        city: 'Cambridge',\n\t        state: 'MA',\n\t        zip: '01742',\n\t        price: '$450,000',\n\t        title: 'Victorian Revival',\n\t        beds: 4,\n\t        baths: 3,\n\t        sqft: 3800,\n\t        likes: 10,\n\t        broker: {\n\t            id: 6,\n\t            name: \"Miriam Aupont\",\n\t            title: \"Senior Broker\",\n\t            picture: \"img1/16.jpg\"\n\t        },\n\t        pic: 'img1/35.jpg',\n\t        thumb: 'img1/36.jpg',\n\t        description: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad.'\n\t    }];\n\t    var output = PROPERTIES;\n\t    return output;\n\t}; component_ekaDIrW_PL();"); var __RESPONSE__;__RESPONSE__=JSON.stringify(__VARIABLES__)
      )";
**/

/**done
const char* csource = R"(

        var __VARIABLES__=eval("var component_ekaDIrW_PI=function component_ekaDIrW_PI(input) {\n\t    var id = input;\n\t    var TempV2 = id - 1;\n\t    var PROPERTIES = [{\n\t        id: 1,\n\t        city: 'Boston',\n\t        state: 'MA',\n\t        price: '$475,000',\n\t        title: 'Condominium Redefined',\n\t        beds: 2,\n\t        baths: 2,\n\t        likes: 5,\n\t        broker: {\n\t            id: 1,\n\t            name: \"Caroline Kingsley\",\n\t            title: \"Senior Broker\",\n\t            picture: \"img/1.jpg\"\n\t        },\n\t        pic: 'img/2.jpg',\n\t        thumb: 'img/3.jpg',\n\t        description: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad.'\n\t    }, {\n\t        id: 2,\n\t        city: 'Cambridge',\n\t        state: 'MA',\n\t        price: '$1,200,000',\n\t        title: 'Ultimate Sophistication',\n\t        beds: 5,\n\t        baths: 4,\n\t        likes: 2,\n\t        broker: {\n\t            id: 2,\n\t            name: \"Michael Jones\",\n\t            title: \"Senior Broker\",\n\t            picture: \"img/4.jpg\"\n\t        },\n\t        pic: 'img/5.jpg',\n\t        thumb: 'img/6.jpg',\n\t        description: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad.'\n\t    }, {\n\t        id: 3,\n\t        city: 'Boston',\n\t        state: 'MA',\n\t        price: '$650,000',\n\t        title: 'Seaport District Retreat',\n\t        beds: 3,\n\t        baths: 2,\n\t        likes: 6,\n\t        broker: {\n\t            id: 3,\n\t            name: \"Jonathan Bradley\",\n\t            title: \"Senior Broker\",\n\t            picture: \"img/7.jpg\"\n\t        },\n\t        pic: 'img/8.jpg',\n\t        thumb: 'img/9.jpg',\n\t        description: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad.'\n\t    }, {\n\t        id: 4,\n\t        city: 'Boston',\n\t        state: 'MA',\n\t        price: '$875,000',\n\t        title: 'Modern City Living',\n\t        beds: 3,\n\t        baths: 2,\n\t        likes: 12,\n\t        broker: {\n\t            id: 4,\n\t            name: \"Jennifer Wu\",\n\t            title: \"Senior Broker\",\n\t            picture: \"img/10.jpg\"\n\t        },\n\t        pic: 'img/11.jpg',\n\t        thumb: 'img/12.jpg',\n\t        description: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad.'\n\t    }, {\n\t        id: 5,\n\t        city: 'Boston',\n\t        state: 'MA',\n\t        zip: '02420',\n\t        price: '$425,000',\n\t        title: 'Urban Efficiency',\n\t        beds: 4,\n\t        baths: 2,\n\t        likes: 5,\n\t        broker: {\n\t            id: 5,\n\t            name: \"Olivia Green\",\n\t            title: \"Senior Broker\",\n\t            picture: \"img/13.jpg\"\n\t        },\n\t        pic: 'img/14.jpg',\n\t        thumb: 'img/15.jpg',\n\t        description: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad.'\n\t    }, {\n\t        id: 6,\n\t        city: 'Boston',\n\t        state: 'MA',\n\t        price: '$550,000',\n\t        title: 'Waterfront in the City',\n\t        beds: 3,\n\t        baths: 2,\n\t        likes: 14,\n\t        broker: {\n\t            id: 6,\n\t            name: \"Miriam Aupont\",\n\t            title: \"Senior Broker\",\n\t            picture: \"img/16.jpg\"\n\t        },\n\t        pic: 'img/17.jpg',\n\t        thumb: 'img/18.jpg',\n\t        description: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad.'\n\t    }, {\n\t        id: 7,\n\t        city: 'Brookline',\n\t        state: 'MA',\n\t        zip: '02420',\n\t        price: '$850,000',\n\t        title: 'Suburban Extravaganza',\n\t        beds: 5,\n\t        baths: 4,\n\t        likes: 5,\n\t        broker: {\n\t            id: 7,\n\t            name: \"Michelle Lambert\",\n\t            title: \"Senior Broker\",\n\t            picture: \"img/19.jpg\"\n\t        },\n\t        pic: 'img/20.jpg',\n\t        thumb: 'img/21.jpg',\n\t        description: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad.'\n\t    }, {\n\t        id: 8,\n\t        city: 'Boston',\n\t        state: 'MA',\n\t        zip: '02420',\n\t        price: '$925,000',\n\t        title: 'Contemporary Luxury',\n\t        beds: 6,\n\t        baths: 6,\n\t        sqft: 950,\n\t        likes: 8,\n\t        broker: {\n\t            id: 8,\n\t            name: \"Victor Oachoa\",\n\t            title: \"Senior Broker\",\n\t            picture: \"img/22.jpg\"\n\t        },\n\t        pic: 'img/23.jpg',\n\t        thumb: 'img/24.jpg',\n\t        description: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad.'\n\t    }, {\n\t        id: 9,\n\t        city: 'Cambridge',\n\t        state: 'MA',\n\t        zip: '02420',\n\t        price: '$550,000',\n\t        title: 'Heart of Harvard Square',\n\t        beds: 5,\n\t        baths: 4,\n\t        likes: 9,\n\t        broker: {\n\t            id: 1,\n\t            name: \"Caroline Kingsley\",\n\t            title: \"Senior Broker\",\n\t            picture: \"img/1.jpg\"\n\t        },\n\t        pic: 'img/25.jpg',\n\t        thumb: 'img/26.jpg',\n\t        description: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad.'\n\t    }, {\n\t        id: 10,\n\t        city: 'Boston',\n\t        state: 'MA',\n\t        zip: '02420',\n\t        price: '$375,000',\n\t        title: 'Architectural Details',\n\t        beds: 2,\n\t        baths: 2,\n\t        likes: 10,\n\t        broker: {\n\t            id: 2,\n\t            name: \"Michael Jones\",\n\t            title: \"Senior Broker\",\n\t            picture: \"img/4.jpg\"\n\t        },\n\t        pic: 'img/27.jpg',\n\t        thumb: 'img/28.jpg',\n\t        description: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad.'\n\t    }, {\n\t        id: 11,\n\t        city: 'Boston',\n\t        state: 'MA',\n\t        zip: '02420',\n\t        price: '$495,000',\n\t        title: 'Modern Elegance',\n\t        beds: 2,\n\t        baths: 2,\n\t        likes: 16,\n\t        broker: {\n\t            id: 3,\n\t            name: \"Jonathan Bradley\",\n\t            title: \"Senior Broker\",\n\t            picture: \"img/7.jpg\"\n\t        },\n\t        pic: 'img/29.jpg',\n\t        thumb: 'img/30.jpg',\n\t        description: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad.'\n\t    }, {\n\t        id: 12,\n\t        city: 'Boston',\n\t        state: 'MA',\n\t        zip: '02420',\n\t        price: '$625,000',\n\t        title: 'Stunning Colonial',\n\t        beds: 4,\n\t        baths: 2,\n\t        likes: 9,\n\t        broker: {\n\t            id: 4,\n\t            name: \"Jennifer Wu\",\n\t            title: \"Senior Broker\",\n\t            picture: \"img/10.jpg\"\n\t        },\n\t        pic: 'img/31.jpg',\n\t        thumb: 'img/32.jpg',\n\t        description: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad.'\n\t    }, {\n\t        id: 13,\n\t        city: 'Cambridge',\n\t        state: 'MA',\n\t        zip: '02420',\n\t        price: '$430,000',\n\t        title: 'Quiet Retreat',\n\t        beds: 5,\n\t        baths: 4,\n\t        likes: 18,\n\t        broker: {\n\t            id: 5,\n\t            name: \"Olivia Green\",\n\t            title: \"Senior Broker\",\n\t            picture: \"img/13.jpg\"\n\t        },\n\t        pic: 'img/33.jpg',\n\t        thumb: 'img/34.jpg',\n\t        description: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad.'\n\t    }, {\n\t        id: 14,\n\t        city: 'Cambridge',\n\t        state: 'MA',\n\t        zip: '01742',\n\t        price: '$450,000',\n\t        title: 'Victorian Revival',\n\t        beds: 4,\n\t        baths: 3,\n\t        sqft: 3800,\n\t        likes: 10,\n\t        broker: {\n\t            id: 6,\n\t            name: \"Miriam Aupont\",\n\t            title: \"Senior Broker\",\n\t            picture: \"img/16.jpg\"\n\t        },\n\t        pic: 'img/35.jpg',\n\t        thumb: 'img/36.jpg',\n\t        description: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad.'\n\t    }];;\n\t    var TempV0 = PROPERTIES[TempV2];\n\t    var output = TempV0;\n\t    return output;\n\t}; component_ekaDIrW_PI(1);"); var __RESPONSE__;__RESPONSE__=JSON.stringify(__VARIABLES__)
      )";
**/
/** done
const char* csource = R"(

        var __VARIABLES__=eval("var component_ekaDIrW_spk=function component_ekaDIrW_spk(){\n    var speakers = [\n        {\n            id: 0,\n            name: 'Brian Leroux',\n            pic: 'brian_leroux.jpg',\n            title: 'Developer',\n            bio: 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.'\n        },\n        {\n            id: 1,\n            name: 'Christophe Coenraets',\n            pic: 'christophe.jpg',\n            title: 'Developer',\n            bio: 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.'\n        },\n        {\n            id: 2,\n            name: 'Brett Rudd',\n            pic: 'brett.jpg',\n            title: 'Developer',\n            bio: 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.'\n        },\n        {\n            id: 3,\n            name: 'Joe Bowser',\n            pic: 'joe_bowser.jpg',\n            title: 'Developer',\n            bio: 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.'\n        },\n        {\n            id: 4,\n            name: 'Michael Brooks',\n            pic: 'mwbrooks.jpeg',\n            title: 'Developer',\n            bio: 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.'\n        },\n        {\n            id: 5,\n            name: 'Jason Weathersby',\n            pic: 'jasonweathersby.jpeg',\n            title: 'Developer',\n            bio: 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.'\n        },\n        {\n            id: 6,\n            name: 'Holly Schinsky',\n            pic: 'holly.jpg',\n            title: 'Developer',\n            bio: 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.'\n        }\n    ];\n    var output = speakers;\n    return output;\n    }; component_ekaDIrW_spk();"); var __RESPONSE__;__RESPONSE__=JSON.stringify(__VARIABLES__)
      )";
**/

/**
const char* csource = R"(

        var __VARIABLES__=eval("var component_ekaDIrW_spkid=function component_ekaDIrW_spkid(input){\n    var id = input;\n    var speakers = [\n        {\n            id: 0,\n            name: 'Brian Leroux',\n            pic: 'brian_leroux.jpg',\n            title: 'Developer',\n            bio: 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.'\n        },\n        {\n            id: 1,\n            name: 'Christophe Coenraets',\n            pic: 'christophe.jpg',\n            title: 'Developer',\n            bio: 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.'\n        },\n        {\n            id: 2,\n            name: 'Brett Rudd',\n            pic: 'brett.jpg',\n            title: 'Developer',\n            bio: 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.'\n        },\n        {\n            id: 3,\n            name: 'Joe Bowser',\n            pic: 'joe_bowser.jpg',\n            title: 'Developer',\n            bio: 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.'\n        },\n        {\n            id: 4,\n            name: 'Michael Brooks',\n            pic: 'mwbrooks.jpeg',\n            title: 'Developer',\n            bio: 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.'\n        },\n        {\n            id: 5,\n            name: 'Jason Weathersby',\n            pic: 'jasonweathersby.jpeg',\n            title: 'Developer',\n            bio: 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.'\n        },\n        {\n            id: 6,\n            name: 'Holly Schinsky',\n            pic: 'holly.jpg',\n            title: 'Developer',\n            bio: 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.'\n        }\n    ];\n    var TempV0 = speakers[id];\n    var output = TempV0;\n    return output;\n}; component_ekaDIrW_spkid(1);"); var __RESPONSE__;__RESPONSE__=JSON.stringify(__VARIABLES__)
      )";

**/
/** doon
const char* csource = R"(

        var __VARIABLES__=eval("var component_ekaDIrW_sessn=function component_ekaDIrW_sessn(){\n    var sessions = [\n        {\n            id: 0,\n            title: 'Native-Like PhoneGap Apps with Ionic',\n            speaker: 'Christophe Coenraets',\n            pic: 'christophe.jpg',\n            time: '3:00pm',\n            room: 'Theater',\n            twitter_id: '@ccoenraets',\n            description: 'In this workshop we\\u2019ll build a full-blown mobile application from scratch for a real world scenario using PhoneGap and the Ionic+AngularJS framework stack.'\n        },\n        {\n            id: 1,\n            title: 'Choosing a UI Framework',\n            speaker: 'Holly Schinsky',\n            pic: 'holly.jpg',\n            time: '9:00am',\n            room: 'Ballroom A',\n            twitter_id: '@devgirlfl',\n            description: 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. '\n        },\n        {\n            id: 2,\n            title: 'Plugin Architecture',\n            speaker: 'Michael Brooks',\n            pic: 'mwbrooks.jpeg',\n            time: '11:00am',\n            room: 'Ballroom C',\n            twitter_id: '@mwbrooks',\n            description: 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur.'\n        },\n        {\n            id: 3,\n            title: 'PhoneGap Build: Building without an SDK',\n            speaker: 'Brett Rudd',\n            pic: 'brett.jpg',\n            time: '2:00pm',\n            room: 'Ballroom D',\n            twitter_id: '@brettrudd',\n            description: 'This presentation will cover the features of the service, focusing on some of our new-ish features such as our oath support, plugins and debugging. There will also be some exclusive sneak peeks of new features revolved around external and private plugins that will hopefully be open for immediate beta testing!  We\\u2019ll end on discussing the future and what is on our roadmap in the coming months.'\n        },\n        {\n            id: 4,\n            title: 'Many Views: Third Party WebViews on Android',\n            speaker: 'Joe Bowser',\n            pic: 'joe_bowser.jpg',\n            time: '1:00pm',\n            room: 'Ballroom B',\n            twitter_id: '@infil00p',\n            description: 'Learn about the recent changes in Cordova, and how developers now have the option to use Mozilla\\'s GeckoView in addition to Intel Crosswalk and the default Android WebView on Cordova.  This new feature coming to Cordova on Android finally gives developers a way out of previously irritating bugs that there was no way to work around.  This will go over the ups and downs of developing for different webviews, as well as a demo showing the power of this new feature.'\n        },\n        {\n            id: 5,\n            title: 'PhoneGap Roadmap',\n            speaker: 'Brian Leroux',\n            pic: 'brian_leroux.jpg',\n            time: '10:00am',\n            room: 'Ballroom F',\n            twitter_id: '@brianleroux',\n            description: 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. '\n        },\n        {\n            id: 6,\n            title: 'Intro to AngularJS',\n            speaker: 'Holly Schinsky',\n            pic: 'holly.jpg',\n            time: '4:45pm',\n            room: 'Ballroom A',\n            twitter_id: '@devgirlfl',\n            description: 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. '\n        },\n        {\n            id: 7,\n            title: 'Workshop: Intro to PhoneGap',\n            speaker: 'Michael Brooks',\n            pic: 'mwbrooks.jpeg',\n            time: '10:00am',\n            room: 'Theater',\n            twitter_id: '@mwbrooks',\n            description: 'This workshop will provide an introduction to PhoneGap, the philosophy behind it and how to get started quickly using a variety of different tools available. The CLI, PhoneGap Developer App, PhoneGap Build and more will be shown and you will learn about the many frameworks available to choose from when building your mobile apps. You will also be shown debugging techniques and walk away with a solid understanding of what PhoneGap is all about.'\n        },\n        {\n            id: 8,\n            title: 'Architecting PhoneGap Apps ',\n            speaker: 'Christophe Coenraets',\n            pic: 'christophe.jpg',\n            time: '1:00pm',\n            room: 'Theater',\n            twitter_id: '@ccoenraets',\n            description: 'Learn how to architect large, complex, and native-like PhoneGap apps using HTML, JavaScript, and CSS. We will investigate mobile challenges and find solutions for them as well as learn all about Single Page Architecture, HTML templates, effective touch events, performance techniques, MVC Frameworks and more.'\n        },\n        {\n            id: 9,\n            title: 'Workshop: PhoneGap and Firefox OS',\n            speaker: 'Jason Weathersby',\n            pic: 'jasonweathersby.jpeg',\n            time: '3:00pm',\n            room: 'Theater',\n            twitter_id: '@jasonweathersby',\n            description: 'We\\'ll begin with the current status of the Firefox OS Cordova integration, including demos of building and debugging basic Cordova Apps using Firefox\\u2019s new Web IDE. The rest of the workshop will be hands-on: we\\'ll help you run your app on a Firefox OS device.'\n        }\n    ];\n    var output = sessions;\n    return output;\n}; component_ekaDIrW_sessn();"); var __RESPONSE__;__RESPONSE__=JSON.stringify(__VARIABLES__)
      )";

**/

const char* csource = R"(

        var __VARIABLES__=eval("var component_ekaDIrW_sssnid=function component_ekaDIrW_sssnid(input){\n    var id = input;\n    var sessions = [\n        {\n            id: 0,\n            title: 'Native-Like PhoneGap Apps with Ionic',\n            speaker: 'Christophe Coenraets',\n            pic: 'christophe.jpg',\n            time: '3:00pm',\n            room: 'Theater',\n            twitter_id: '@ccoenraets',\n            description: 'In this workshop we\\u2019ll build a full-blown mobile application from scratch for a real world scenario using PhoneGap and the Ionic+AngularJS framework stack.'\n        },\n        {\n            id: 1,\n            title: 'Choosing a UI Framework',\n            speaker: 'Holly Schinsky',\n            pic: 'holly.jpg',\n            time: '9:00am',\n            room: 'Ballroom A',\n            twitter_id: '@devgirlfl',\n            description: 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. '\n        },\n        {\n            id: 2,\n            title: 'Plugin Architecture',\n            speaker: 'Michael Brooks',\n            pic: 'mwbrooks.jpeg',\n            time: '11:00am',\n            room: 'Ballroom C',\n            twitter_id: '@mwbrooks',\n            description: 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur.'\n        },\n        {\n            id: 3,\n            title: 'PhoneGap Build: Building without an SDK',\n            speaker: 'Brett Rudd',\n            pic: 'brett.jpg',\n            time: '2:00pm',\n            room: 'Ballroom D',\n            twitter_id: '@brettrudd',\n            description: 'This presentation will cover the features of the service, focusing on some of our new-ish features such as our oath support, plugins and debugging. There will also be some exclusive sneak peeks of new features revolved around external and private plugins that will hopefully be open for immediate beta testing!  We\\u2019ll end on discussing the future and what is on our roadmap in the coming months.'\n        },\n        {\n            id: 4,\n            title: 'Many Views: Third Party WebViews on Android',\n            speaker: 'Joe Bowser',\n            pic: 'joe_bowser.jpg',\n            time: '1:00pm',\n            room: 'Ballroom B',\n            twitter_id: '@infil00p',\n            description: 'Learn about the recent changes in Cordova, and how developers now have the option to use Mozilla\\'s GeckoView in addition to Intel Crosswalk and the default Android WebView on Cordova.  This new feature coming to Cordova on Android finally gives developers a way out of previously irritating bugs that there was no way to work around.  This will go over the ups and downs of developing for different webviews, as well as a demo showing the power of this new feature.'\n        },\n        {\n            id: 5,\n            title: 'PhoneGap Roadmap',\n            speaker: 'Brian Leroux',\n            pic: 'brian_leroux.jpg',\n            time: '10:00am',\n            room: 'Ballroom F',\n            twitter_id: '@brianleroux',\n            description: 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. '\n        },\n        {\n            id: 6,\n            title: 'Intro to AngularJS',\n            speaker: 'Holly Schinsky',\n            pic: 'holly.jpg',\n            time: '4:45pm',\n            room: 'Ballroom A',\n            twitter_id: '@devgirlfl',\n            description: 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. '\n        },\n        {\n            id: 7,\n            title: 'Workshop: Intro to PhoneGap',\n            speaker: 'Michael Brooks',\n            pic: 'mwbrooks.jpeg',\n            time: '10:00am',\n            room: 'Theater',\n            twitter_id: '@mwbrooks',\n            description: 'This workshop will provide an introduction to PhoneGap, the philosophy behind it and how to get started quickly using a variety of different tools available. The CLI, PhoneGap Developer App, PhoneGap Build and more will be shown and you will learn about the many frameworks available to choose from when building your mobile apps. You will also be shown debugging techniques and walk away with a solid understanding of what PhoneGap is all about.'\n        },\n        {\n            id: 8,\n            title: 'Architecting PhoneGap Apps ',\n            speaker: 'Christophe Coenraets',\n            pic: 'christophe.jpg',\n            time: '1:00pm',\n            room: 'Theater',\n            twitter_id: '@ccoenraets',\n            description: 'Learn how to architect large, complex, and native-like PhoneGap apps using HTML, JavaScript, and CSS. We will investigate mobile challenges and find solutions for them as well as learn all about Single Page Architecture, HTML templates, effective touch events, performance techniques, MVC Frameworks and more.'\n        },\n        {\n            id: 9,\n            title: 'Workshop: PhoneGap and Firefox OS',\n            speaker: 'Jason Weathersby',\n            pic: 'jasonweathersby.jpeg',\n            time: '3:00pm',\n            room: 'Theater',\n            twitter_id: '@jasonweathersby',\n            description: 'We\\'ll begin with the current status of the Firefox OS Cordova integration, including demos of building and debugging basic Cordova Apps using Firefox\\u2019s new Web IDE. The rest of the workshop will be hands-on: we\\'ll help you run your app on a Firefox OS device.'\n        }\n    ];\n    var TempV0 = sessions[id];\n    var output = TempV0;\n    return output;\n}; component_ekaDIrW_sssnid(1);"); var __RESPONSE__;__RESPONSE__=JSON.stringify(__VARIABLES__)
      )";





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
  }

  isolate->LowMemoryNotification();



  // Dispose the isolate and tear down V8.
  isolate->Dispose();
  V8::Dispose();
  V8::ShutdownPlatform();
   
return str_val;
//  {
//    Isolate::Scope isolate_scope(isolate);

    //Create a stack-allocated handle scope.
//    HandleScope handle_scope(isolate);

    // Create a new context.
   // Local<Context> context = Context::New(isolate);

    // Enter the context for compiling and running the hello world script.
 // Context::Scope context_scope(context);


//    test.Reset(isolate, String::NewFromUtf8(isolate, "Hello' + ', World!'"));
    //test.SetWeak(&test, weak_callback, v8::WeakCallbackType::kParameter);


    // Create a string containing the JavaScript source code.
//    Local<String> source = String::NewFromUtf8(isolate, "(2+2*2) + ' ' + 'Hello' + ', World!'");

    // Compile the source code.
//    v8::Local<v8::Script> script = v8::Script::Compile(source);
      // Compile the source code.
     // v8::Local<v8::Script> script =
      //    v8::Script::Compile(context, source).ToLocalChecked();

    // Run the script to get the result.
  //  Local<Value> result = script->Run();

    // Convert the result to an UTF8 string and print it.
   // String::Utf8Value utf8(isolate, result);
   // printf("%s\n", *utf8);

 // }

  //isolate->LowMemoryNotification();


  // Dispose the isolate and tear down V8.
  //isolate->Dispose();
  //V8::Dispose();
  //V8::ShutdownPlatform();

  //return 0;
}
/**
static int runcode(){
  // Initialize V8.
  v8::V8::InitializeICU();
  v8::Platform *platform = v8::platform::CreateDefaultPlatform();
  v8::V8::InitializePlatform(platform);
  V8::Initialize();


  char* test;

  // Create a new Isolate and make it the current one.
  v8::Isolate::CreateParams create_params;
  create_params.array_buffer_allocator =
      v8::ArrayBuffer::Allocator::NewDefaultAllocator();
  v8::Isolate* isolate = v8::Isolate::New(create_params);
  {
    v8::Isolate::Scope isolate_scope(isolate);
    // Create a stack-allocated handle scope.
    v8::HandleScope handle_scope(isolate);
    // Create a new context.
    v8::Local<v8::Context> context = v8::Context::New(isolate);
    // Enter the context for compiling and running the hello world script.
    v8::Context::Scope context_scope(context);
     {
      // Use the JavaScript API to generate a WebAssembly module.
      //
      // |bytes| contains the binary format for the following module:
      //
      //     (func (export "add") (param i32 i32) (result i32)
      //       get_local 0
      //       get_local 1
      //       i32.add)
      //
      const char* csource = R"(

	var __VARIABLES__=eval("var component_ekaDIrW=function component_ekaDIrW(input) { var id = input; var BROKERS = [{ id: 1, 	        firstName:  \ \"Caroline \ \", 	        lastName:  \ \"Kingsley \ \", 	        title:  \ \"Senior Broker \ \", 	        phone:  \ \"617-244-3672 \ \", 	        mobilePhone:  \ \"617-244-3672 \ \", 	        email:  \ \"caroline@ionicrealty.com \ \", 	        picture:  \ \"img/1.jpg \" 	    }, { 	        id: 2, 	        firstName:  \"Michael \", 	        lastName:  \"Jones \", 	        title:  \"Senior Broker \", 	        phone:  \"617-244-3672 \", 	        mobilePhone:  \"617-244-3672 \", 	        email:  \"michael@ionicrealty.com \", 	        picture:  \"img/2.jpg \" 	    }, { 	        id: 3, 	        firstName:  \"Jonathan \", 	        lastName:  \"Bradley \", 	        title:  \"Senior Broker \", 	        phone:  \"617-244-3672 \", 	        mobilePhone:  \"617-244-3672 \", 	        email:  \"jonathan@ionicrealty.com \", 	        picture:  \"img/3.jpg \" 	    }, { 	        id: 4, 	        firstName:  \"Jennifer \", 	        lastName:  \"Wu \", 	        title:  \"Senior Broker \", 	        phone:  \"617-244-3672 \", 	        mobilePhone:  \"617-244-3672 \", 	        email:  \"jen@ionicrealty.com \", 	        picture:  \"img/4.jpg \" 	    }, { 	        id: 5, 	        firstName:  \"Olivia \", 	        lastName:  \"Green \", 	        title:  \"Senior Broker \", 	        phone:  \"617-244-3672 \", 	        mobilePhone:  \"617-244-3672 \", 	        email:  \"olivia@ionicrealty.com \", 	        picture:  \"img/5.jpg \" 	    }, { 	        id: 6, 	        firstName:  \"Miriam \", 	        lastName:  \"Aupont \", 	        title:  \"Senior Broker \", 	        phone:  \"617-244-3672 \", 	        mobilePhone:  \"617-244-3672 \", 	        email:  \"miriam@ionicrealty.com \", 	        picture:  \"img/6.jpg \" 	    }, { 	        id: 7, 	        firstName:  \"Michelle \", 	        lastName:  \"Lambert \", 	        title:  \"Senior Broker \", 	        phone:  \"617-244-3672 \", 	        mobilePhone:  \"617-244-3672 \", 	        email:  \"michelle@ionicrealty.com \", 	        picture:  \"img/7.jpg \" 	    }, { 	        id: 8, 	        firstName:  \"Victor \", 	        lastName:  \"Ochoa \", 	        title:  \"Senior Broker \", 	        phone:  \"617-244-3672 \", 	        mobilePhone:  \"617-244-3672 \", 	        email:  \"victor@ionicrealty.com \", 	        picture:  \"img/8.jpg \" 	    }]; 	    var TempV1 = id - 1; 	    var TempV0 = BROKERS[TempV1]; 	    var output = TempV0; 	    return output; 	}; component_ekaDIrW(1);"); var __RESPONSE__;__RESPONSE__=JSON.stringify(__VARIABLES__)
      )";

      // Create a string containing the JavaScript source code.
      v8::Local<v8::String> source =
          v8::String::NewFromUtf8(isolate, csource, v8::NewStringType::kNormal)
              .ToLocalChecked();

      // Compile the source code.
      v8::Local<v8::Script> script =
          v8::Script::Compile(context, source).ToLocalChecked();

      // Run the script to get the result.
      v8::Local<v8::Value> result = script->Run(context).ToLocalChecked();

      v8::String::Utf8Value utf8(isolate, result);
      test = *utf8;
      printf("%s\n", test);
      }
  }
  // Dispose the isolate and tear down V8.
  isolate->Dispose();
  v8::V8::Dispose();
  v8::V8::ShutdownPlatform();
  delete create_params.array_buffer_allocator;
  return 0;
}
**/
//int main(int argc, char* argv[]) {
//
//}



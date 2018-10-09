#import <objc/runtime.h>
#import <Cordova/NSDictionary+CordovaPreferences.h>
#import "CDVWKWebViewEngine.h"

@interface CDVWKWebViewEngine (SchemeHandler)
+ (void) load;
- (void) swizzleWKContentViewForInputFocus;
- (void) keyboardDisplayDoesNotRequireUserAction;
@end
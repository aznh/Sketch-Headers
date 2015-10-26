#import "NSObject.h"

@class NSMutableArray, NSString, WebView;

@interface MSAnalytics : NSObject
{
    WebView *_webView;
    NSString *_siteId;
    NSMutableArray *_queue;
    BOOL _webViewReady;
    BOOL _debug;
}

+ (id)sharedInstance;
@property(nonatomic) BOOL debug; // @synthesize debug=_debug;
- (void).cxx_destruct;
- (BOOL)currentApplicationIsActive;
- (void)trackEvent:(id)arg1 withInterval:(long long)arg2 checkInterval:(long long)arg3 conditional:(CDUnknownBlockType)arg4;
- (void)trackEvent:(id)arg1 withValue:(id)arg2;
- (void)trackEventWithCategory:(id)arg1 action:(id)arg2 label:(id)arg3 value:(id)arg4;
- (void)trackScreenWithName:(id)arg1;
- (id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (void)webView:(id)arg1 addMessageToConsole:(id)arg2;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)sendAppInfo;
- (void)sendAction:(id)arg1 arguments:(id)arg2;
- (void)callMethod:(id)arg1 arguments:(id)arg2;
- (void)reload;
- (void)setup;
- (void)configureWithSiteId:(id)arg1;
- (id)init;

@end

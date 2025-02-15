//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/NSObject-Protocol.h>

@class NSArray, NSString, RWIProtocolDOMFlexOverlayConfig, RWIProtocolDOMGridOverlayConfig, RWIProtocolDOMHighlightConfig;

@protocol RWIProtocolDOMDomainHandler <NSObject>

@optional
- (void)getMediaStatsWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(RWIProtocolDOMMediaStats *))arg2 nodeId:(int)arg3;
- (void)setAllowEditingUserAgentShadowTreesWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 allow:(_Bool)arg3;
- (void)setInspectedNodeWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 nodeId:(int)arg3;
- (void)focusWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 nodeId:(int)arg3;
- (void)markUndoableStateWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2;
- (void)redoWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2;
- (void)undoWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2;
- (void)moveToWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(int))arg2 nodeId:(int)arg3 targetNodeId:(int)arg4 insertBeforeNodeId:(int *)arg5;
- (void)getAttributesWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSArray *))arg2 nodeId:(int)arg3;
- (void)resolveNodeWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(RWIProtocolRuntimeRemoteObject *))arg2 nodeId:(int)arg3 objectGroup:(id *)arg4;
- (void)pushNodeByPathToFrontendWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(int))arg2 path:(NSString *)arg3;
- (void)hideFlexOverlayWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 nodeId:(int *)arg3;
- (void)showFlexOverlayWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 nodeId:(int)arg3 flexOverlayConfig:(RWIProtocolDOMFlexOverlayConfig *)arg4;
- (void)hideGridOverlayWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 nodeId:(int *)arg3;
- (void)showGridOverlayWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 nodeId:(int)arg3 gridOverlayConfig:(RWIProtocolDOMGridOverlayConfig *)arg4;
- (void)highlightFrameWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 frameId:(NSString *)arg3 contentColor:(id *)arg4 contentOutlineColor:(id *)arg5;
- (void)hideHighlightWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2;
- (void)highlightNodeListWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 nodeIds:(NSArray *)arg3 highlightConfig:(RWIProtocolDOMHighlightConfig *)arg4 gridOverlayConfig:(id *)arg5 flexOverlayConfig:(id *)arg6 showRulers:(_Bool *)arg7;
- (void)highlightNodeWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 nodeId:(int *)arg3 objectId:(id *)arg4 highlightConfig:(RWIProtocolDOMHighlightConfig *)arg5 gridOverlayConfig:(id *)arg6 flexOverlayConfig:(id *)arg7 showRulers:(_Bool *)arg8;
- (void)highlightSelectorWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 selectorString:(NSString *)arg3 frameId:(id *)arg4 highlightConfig:(RWIProtocolDOMHighlightConfig *)arg5 gridOverlayConfig:(id *)arg6 flexOverlayConfig:(id *)arg7 showRulers:(_Bool *)arg8;
- (void)highlightQuadWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 quad:(NSArray *)arg3 color:(id *)arg4 outlineColor:(id *)arg5 usePageCoordinates:(_Bool *)arg6;
- (void)highlightRectWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 x:(int)arg3 y:(int)arg4 width:(int)arg5 height:(int)arg6 color:(id *)arg7 outlineColor:(id *)arg8 usePageCoordinates:(_Bool *)arg9;
- (void)setInspectModeEnabledWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 enabled:(_Bool)arg3 highlightConfig:(id *)arg4 gridOverlayConfig:(id *)arg5 flexOverlayConfig:(id *)arg6 showRulers:(_Bool *)arg7;
- (void)requestNodeWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(int))arg2 objectId:(NSString *)arg3;
- (void)discardSearchResultsWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 searchId:(NSString *)arg3;
- (void)getSearchResultsWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSArray *))arg2 searchId:(NSString *)arg3 fromIndex:(int)arg4 toIndex:(int)arg5;
- (void)performSearchWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSString *, int))arg2 query:(NSString *)arg3 nodeIds:(id *)arg4 caseSensitive:(_Bool *)arg5;
- (void)insertAdjacentHTMLWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 nodeId:(int)arg3 position:(NSString *)arg4 html:(NSString *)arg5;
- (void)setOuterHTMLWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 nodeId:(int)arg3 outerHTML:(NSString *)arg4;
- (void)getOuterHTMLWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSString *))arg2 nodeId:(int)arg3;
- (void)getAccessibilityPropertiesForNodeWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(RWIProtocolDOMAccessibilityProperties *))arg2 nodeId:(int)arg3;
- (void)removeBreakpointForEventListenerWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 eventListenerId:(int)arg3;
- (void)setBreakpointForEventListenerWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 eventListenerId:(int)arg3 options:(id *)arg4;
- (void)setEventListenerDisabledWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 eventListenerId:(int)arg3 disabled:(_Bool)arg4;
- (void)getEventListenersForNodeWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSArray *))arg2 nodeId:(int)arg3 includeAncestors:(_Bool *)arg4;
- (void)getSupportedEventNamesWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSArray *))arg2;
- (void)removeAttributeWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 nodeId:(int)arg3 name:(NSString *)arg4;
- (void)setAttributesAsTextWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 nodeId:(int)arg3 text:(NSString *)arg4 name:(id *)arg5;
- (void)setAttributeValueWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 nodeId:(int)arg3 name:(NSString *)arg4 value:(NSString *)arg5;
- (void)removeNodeWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 nodeId:(int)arg3;
- (void)setNodeValueWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 nodeId:(int)arg3 value:(NSString *)arg4;
- (void)setNodeNameWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(int))arg2 nodeId:(int)arg3 name:(NSString *)arg4;
- (void)querySelectorAllWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSArray *))arg2 nodeId:(int)arg3 selector:(NSString *)arg4;
- (void)querySelectorWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(int *))arg2 nodeId:(int)arg3 selector:(NSString *)arg4;
- (void)requestChildNodesWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 nodeId:(int)arg3 depth:(int *)arg4;
- (void)getDocumentWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(RWIProtocolDOMNode *))arg2;
@end


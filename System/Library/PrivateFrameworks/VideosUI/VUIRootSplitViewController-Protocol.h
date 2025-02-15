//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>

@class NSArray, NSString, NSURL, UIViewController, VUIAppContext;

@protocol VUIRootSplitViewController <NSObject>
- (_Bool)hasRemoteBarItems;
- (void)prepareForOpenURLPlayback;
- (_Bool)isSidebarVisible;
- (void)makeSidebarVisible:(_Bool)arg1;
- (UIViewController *)controllerForIdentifier:(NSString *)arg1;
- (_Bool)controllerExistsForIdentifier:(NSString *)arg1;
- (void)setSelectedIndexForIdentifier:(NSString *)arg1 withDeeplinkURL:(NSURL *)arg2;
- (void)updateWithBarItems:(NSArray *)arg1 setSelectedIdentifierFromDefaults:(_Bool)arg2 appContext:(VUIAppContext *)arg3;
@end


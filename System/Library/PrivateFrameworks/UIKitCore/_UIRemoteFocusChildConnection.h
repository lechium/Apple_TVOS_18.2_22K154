//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBScene, NSString, UIView, _UIRemoteFocusChildReceiverFBSSceneComponent;

__attribute__((visibility("hidden")))
@interface _UIRemoteFocusChildConnection : NSObject
{
    NSString *_clientSceneIdentifier;	// 8 = 0x8
    _UIRemoteFocusChildReceiverFBSSceneComponent *_clientReceiver;	// 16 = 0x10
    FBScene *_clientScene;	// 24 = 0x18
    UIView *_containerView;	// 32 = 0x20
    unsigned long long _entranceHeading;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000117f4be
@property(nonatomic) unsigned long long entranceHeading; // @synthesize entranceHeading=_entranceHeading;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak FBScene *clientScene; // @synthesize clientScene=_clientScene;
@property(nonatomic) __weak _UIRemoteFocusChildReceiverFBSSceneComponent *clientReceiver; // @synthesize clientReceiver=_clientReceiver;
@property(retain, nonatomic) NSString *clientSceneIdentifier; // @synthesize clientSceneIdentifier=_clientSceneIdentifier;

@end


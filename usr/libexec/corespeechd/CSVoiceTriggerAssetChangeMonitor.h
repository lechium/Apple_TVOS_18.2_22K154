//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CSVoiceTriggerAssetChangeDelegate, OS_dispatch_queue;

@interface CSVoiceTriggerAssetChangeMonitor : NSObject
{
    int _notifyToken;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    id <CSVoiceTriggerAssetChangeDelegate> _delegate;	// 24 = 0x18
}

+ (id)sharedMonitor;	// IMP=0x0040000000027962
- (void).cxx_destruct;	// IMP=0x00200000000278c2
@property(nonatomic) __weak id <CSVoiceTriggerAssetChangeDelegate> delegate; // @synthesize delegate=_delegate;
- (void)notifyVoiceTriggerAssetChanged;	// IMP=0x001000000002788a
- (void)startMonitoring;	// IMP=0x00100000000277d8
- (id)init;	// IMP=0x0010000000027779

@end


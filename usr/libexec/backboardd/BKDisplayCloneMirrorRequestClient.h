//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface BKDisplayCloneMirrorRequestClient : NSObject
{
    int _pid;	// 8 = 0x8
    NSString *_displayUUID;	// 16 = 0x10
    unsigned long long _mode;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000298b3
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x0010000000029821
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


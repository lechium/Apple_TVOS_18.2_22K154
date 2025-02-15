//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SIBCForegroundResponseMessage : NSObject
{
    NSString *_applicationId;	// 8 = 0x8
    long long _status;	// 16 = 0x10
    NSString *_dismissedApplicationId;	// 24 = 0x18
}

+ (id)logHandle;	// IMP=0x0010000000012b26
+ (id)messageId;	// IMP=0x0010000000012a10
- (void).cxx_destruct;	// IMP=0x0000000000012c1b
@property(readonly, nonatomic) NSString *dismissedApplicationId; // @synthesize dismissedApplicationId=_dismissedApplicationId;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) NSString *applicationId; // @synthesize applicationId=_applicationId;
- (long long)SIBSForegroundStatus;	// IMP=0x0000000000012bd2
- (id)SIBSErrorFromResponseStatus;	// IMP=0x0000000000012b56
@property(readonly, copy) NSString *description;
- (id)initWithEncodedDictionary:(id)arg1;	// IMP=0x00000000000125ec
- (id)dictionaryEncoding;	// IMP=0x00000000000125e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


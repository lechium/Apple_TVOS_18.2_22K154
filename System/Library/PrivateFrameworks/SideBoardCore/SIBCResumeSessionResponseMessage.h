//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SIBCResumeSessionResponseMessage : NSObject
{
    long long _status;	// 8 = 0x8
}

+ (id)logHandle;	// IMP=0x00100000000047e8
+ (id)messageId;	// IMP=0x0010000000004779
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, copy) NSString *description;
- (id)initWithEncodedDictionary:(id)arg1;	// IMP=0x000000000000447e
- (id)dictionaryEncoding;	// IMP=0x0000000000004476

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


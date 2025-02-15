//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface FMInternalKeychainItem : NSObject
{
    NSString *_password;	// 8 = 0x8
    NSDate *_lastModifyDate;	// 16 = 0x10
    NSDate *_creationDate;	// 24 = 0x18
    NSData *_rawData;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000013505
@property(retain, nonatomic) NSData *rawData; // @synthesize rawData=_rawData;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSDate *lastModifyDate; // @synthesize lastModifyDate=_lastModifyDate;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
- (id)initWithResults:(id)arg1;	// IMP=0x00000000000131e2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


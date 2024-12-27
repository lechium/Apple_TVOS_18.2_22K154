//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HMFObject.h"

@class HMFActivity, NSData, NSDictionary;

__attribute__((visibility("hidden")))
@interface HMFHTTPResponseInternal : HMFObject
{
    HMFActivity *_activity;	// 8 = 0x8
    long long _statusCode;	// 16 = 0x10
    NSDictionary *_headerFields;	// 24 = 0x18
    NSData *_body;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000042b83
@property(copy, nonatomic) NSData *body; // @synthesize body=_body;
@property(copy, nonatomic) NSDictionary *headerFields; // @synthesize headerFields=_headerFields;
@property(readonly, nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(readonly, nonatomic) HMFActivity *activity; // @synthesize activity=_activity;
- (void)setHeaderValue:(id)arg1 forHeaderKey:(id)arg2;	// IMP=0x0000000000042a38
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004292e
- (id)initWithStatusCode:(long long)arg1 headerFields:(id)arg2 body:(id)arg3 activity:(id)arg4;	// IMP=0x0000000000042833
- (id)init;	// IMP=0x000000000004278b

@end


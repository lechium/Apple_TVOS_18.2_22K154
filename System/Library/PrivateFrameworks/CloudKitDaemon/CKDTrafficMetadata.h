//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate, NSDictionary, NSString, NSURL;

@interface CKDTrafficMetadata : NSObject
{
    MISSING_TYPE *timestamp;	// 4113367 = 0x3ec3d7
    MISSING_TYPE *url;	// 12732 = 0x31bc
    MISSING_TYPE *method;	// 0 = 0x0
    MISSING_TYPE *status;	// 2147484672 = 0x80000400
    MISSING_TYPE *headers;	// 0 = 0x0
    MISSING_TYPE *requestClassName;	// 1953718111 = 0x74735f5f
    MISSING_TYPE *parsingStandaloneMessage;	// 0 = 0x0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000002dafc
- (void).cxx_destruct;	// IMP=0x000000000002eca2
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002eb06
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002e029
- (id)init;	// IMP=0x000000000002d9f7
@property(nonatomic) _Bool parsingStandaloneMessage; // @synthesize parsingStandaloneMessage;
@property(nonatomic, copy) NSString *requestClassName;
@property(nonatomic, copy) NSDictionary *headers;
@property(nonatomic) long long status; // @synthesize status;
@property(nonatomic, copy) NSString *method;
@property(nonatomic, copy) NSURL *url;
@property(nonatomic, copy) NSDate *timestamp;

@end


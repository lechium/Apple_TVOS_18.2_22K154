//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSError;

@interface GTCaptureResponse : NSObject
{
    union GTDataVersion _version;	// 8 = 0x8
    unsigned long long _requestID;	// 16 = 0x10
    NSData *_data;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000004274
- (void).cxx_destruct;	// IMP=0x00200000000044eb
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) unsigned long long requestID; // @synthesize requestID=_requestID;
@property(nonatomic) union GTDataVersion version; // @synthesize version=_version;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000043f1
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000042d1
- (id)init;	// IMP=0x001000000000427c

@end


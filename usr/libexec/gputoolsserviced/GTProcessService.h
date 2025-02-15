//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GTProcessInfo, GTServiceProperties;

@interface GTProcessService : NSObject
{
    GTServiceProperties *_serviceProperties;	// 8 = 0x8
    GTProcessInfo *_processInfo;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000001c2fb
- (void).cxx_destruct;	// IMP=0x002000000001c5aa
@property(copy, nonatomic) GTProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
@property(copy, nonatomic) GTServiceProperties *serviceProperties; // @synthesize serviceProperties=_serviceProperties;
- (id)description;	// IMP=0x001000000001c536
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000001c4e3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000001c476
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000001c39c
- (id)initWithService:(id)arg1 processInfo:(id)arg2;	// IMP=0x001000000001c303

@end


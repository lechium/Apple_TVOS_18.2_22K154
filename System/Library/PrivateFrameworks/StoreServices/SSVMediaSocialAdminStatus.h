//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface SSVMediaSocialAdminStatus : NSObject
{
    _Bool _admin;	// 8 = 0x8
    NSDate *_dateUpdated;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001680df
- (void).cxx_destruct;	// IMP=0x00000000001682c9
@property(readonly, nonatomic, getter=isAdmin) _Bool admin; // @synthesize admin=_admin;
@property(readonly, nonatomic) NSDate *dateUpdated; // @synthesize dateUpdated=_dateUpdated;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001681be
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001680e7
- (id)initWithAdminStatus:(_Bool)arg1 dateUpdated:(id)arg2;	// IMP=0x0000000000168045

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CuttlefishCurrentItemSpecifier : NSObject
{
    NSString *_zoneID;	// 8 = 0x8
    NSString *_itemPtrName;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000001d1840
- (void).cxx_destruct;	// IMP=0x00200000001d1818
@property(retain) NSString *itemPtrName; // @synthesize itemPtrName=_itemPtrName;
@property(retain) NSString *zoneID; // @synthesize zoneID=_zoneID;
- (id)description;	// IMP=0x00100000001d173f
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001d1665
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001d15b7
- (id)init:(id)arg1 zoneID:(id)arg2;	// IMP=0x00100000001d151e

@end


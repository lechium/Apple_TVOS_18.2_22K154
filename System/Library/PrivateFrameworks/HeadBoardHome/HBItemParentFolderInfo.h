//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HBItemParentFolderInfo : NSObject
{
    NSString *_parentFolderIdentifier;	// 8 = 0x8
    NSNumber *_parentFolderLevel;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000003f5db
- (void).cxx_destruct;	// IMP=0x000000000003f617
@property(retain, nonatomic) NSNumber *parentFolderLevel; // @synthesize parentFolderLevel=_parentFolderLevel;
@property(copy, nonatomic) NSString *parentFolderIdentifier; // @synthesize parentFolderIdentifier=_parentFolderIdentifier;
- (id)description;	// IMP=0x000000000003f507
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003f492
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003f3c9

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface PXPeoplePetsHomeVisibilitySource : NSObject
{
    MISSING_TYPE *visibility;	// 8 = 0x8
    MISSING_TYPE *humans;	// 16 = 0x10
    MISSING_TYPE *pets;	// 24 = 0x18
    MISSING_TYPE *defaults;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000012d970
- (id)init;	// IMP=0x000000000012d910
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x000000000012d440
@property(nonatomic) unsigned long long visibility; // @synthesize visibility;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;	// IMP=0x000000000012db20

@end


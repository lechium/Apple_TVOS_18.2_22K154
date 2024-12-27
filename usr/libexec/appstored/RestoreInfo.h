//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface RestoreInfo : NSObject
{
    _Bool _userInitiated;	// 8 = 0x8
    long long _batchSize;	// 16 = 0x10
    NSMutableDictionary *_nonOrderedRestoreInstallForAccounts;	// 24 = 0x18
    NSMutableDictionary *_orderedRestoreInstallForAccounts;	// 32 = 0x20
    long long _nonOrderedLookupCount;	// 40 = 0x28
    long long _orderedLookupCount;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000001007f0

@end


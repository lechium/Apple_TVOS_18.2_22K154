//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol NSFastEnumeration;

@interface LibraryLazyResultsEnumerator : NSObject
{
    CDUnknownBlockType _block;	// 8 = 0x8
    id <NSFastEnumeration> _enumerator;	// 16 = 0x10
    long long _resultComplexity;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000e6124
@property(readonly) long long resultComplexity; // @synthesize resultComplexity=_resultComplexity;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00100000000e6071

@end


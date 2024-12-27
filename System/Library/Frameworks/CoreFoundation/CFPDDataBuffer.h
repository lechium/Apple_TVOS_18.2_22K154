//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CFPDDataBuffer : NSObject
{
}

+ (id)newBufferFromPropertyList:(void *)arg1;	// IMP=0x008000000004c7fc
+ (id)newBufferFromFile:(int)arg1 allowMappingIfSafe:(_Bool)arg2;	// IMP=0x008000000004c782
+ (id)newBufferFromCFData:(struct __CFData *)arg1;	// IMP=0x008000000004c754
- (_Bool)purgable;	// IMP=0x000000000004cb88
- (void)endAccessing;	// IMP=0x000000000004cb87
- (_Bool)beginAccessing;	// IMP=0x000000000004cb84
- (void)quicklyValidatePlistAndOnFailureInvokeBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004ca60
- (_Bool)validatePlist;	// IMP=0x000000000004c9b2
- (void *)copyPropertyListWithMutability:(unsigned long long)arg1 error:(struct __CFError **)arg2;	// IMP=0x000000000004c8ce
- (id)copyXPCData;	// IMP=0x000000000004c88b
- (struct __CFData *)copyCFData;	// IMP=0x000000000004c83c
- (unsigned long long)length;	// IMP=0x000000000004c833
- (void *)bytes;	// IMP=0x000000000004c82a

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface EspressoFileUtils : NSObject
{
}

+ (void)writeIKFloatTensorBuffer:(const void *)arg1 ToBinFile:(id)arg2;	// IMP=0x0080000000011080
+ (void)writeEspressoBufferToBinFile:(id)arg1 FromBuffer:(id)arg2;	// IMP=0x0080000000010dc0
+ (struct EspressoTensor)createEspressoTensorFromTextFile:(id)arg1 channels:(unsigned long long)arg2 height:(unsigned long long)arg3 width:(unsigned long long)arg4;	// IMP=0x00800000000108f0
+ (void)writeEspressoBufferToTextFile:(id)arg1 FromBuffer:(id)arg2;	// IMP=0x0080000000010280

@end


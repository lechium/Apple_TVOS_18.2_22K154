//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (BSXPCObjectUtilitiesIndirect)
+ (_Bool)bs_isXPCObject;	// IMP=0x0060000000060356
+ (id)bs_secureObjectFromData:(id)arg1 ofClasses:(id)arg2;	// IMP=0x00600000000830d9
+ (id)bs_secureObjectFromData:(id)arg1 ofClass:(Class)arg2;	// IMP=0x0060000000083076
+ (id)bs_secureDataFromObject:(id)arg1;	// IMP=0x0060000000083061
+ (id)bs_secureDecodedFromData:(id)arg1 withAdditionalClasses:(id)arg2;	// IMP=0x00600000000828f0
+ (id)bs_secureDecodedFromData:(id)arg1;	// IMP=0x00600000000824f5
+ (_Bool)bs_isPlistableType;	// IMP=0x0060000000081dd5
+ (_Bool)supportsBSXPCSecureCoding;	// IMP=0x00600000000999fb
- (id)bs_secureEncoded;	// IMP=0x0010000000082043
- (_Bool)bs_isPlistableType;	// IMP=0x0010000000082029
- (_Bool)supportsBSXPCSecureCoding;	// IMP=0x0010000000099a03
@end


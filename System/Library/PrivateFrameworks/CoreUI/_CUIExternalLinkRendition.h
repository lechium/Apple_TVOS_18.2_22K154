//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface _CUIExternalLinkRendition
{
    NSString *_assetPackIdentifier;	// 216 = 0xd8
    NSMutableSet *_externalTags;	// 224 = 0xe0
}

- (id)externalTags;	// IMP=0x0000000000051ee2
- (id)assetPackIdentifier;	// IMP=0x0000000000051ed1
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1 version:(unsigned int)arg2;	// IMP=0x0000000000051c76
- (void)dealloc;	// IMP=0x0000000000051c1e
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 version:(unsigned int)arg3;	// IMP=0x0000000000051c0c

@end


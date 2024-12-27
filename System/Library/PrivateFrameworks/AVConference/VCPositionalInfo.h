//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPositionalInfo : NSObject
{
    _Bool _isInCanvas;	// 8 = 0x8
    struct CGSize _size;	// 16 = 0x10
    double _x;	// 32 = 0x20
    double _y;	// 40 = 0x28
    double _z;	// 48 = 0x30
    _Bool _hasPendingChanges;	// 56 = 0x38
    _Bool _isVisible;	// 57 = 0x39
    unsigned int _prominenceIndex;	// 60 = 0x3c
    struct tagVCSpatialAudioMetadataPositionalInfo _metadataPositionalInfo;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000385ea9
@property(nonatomic) _Bool isInCanvas; // @synthesize isInCanvas=_isInCanvas;
@property(nonatomic) _Bool isVisible; // @synthesize isVisible=_isVisible;
@property(nonatomic) unsigned int prominenceIndex; // @synthesize prominenceIndex=_prominenceIndex;
@property(readonly, nonatomic) _Bool hasPendingChanges; // @synthesize hasPendingChanges=_hasPendingChanges;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000385fcf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000385eb1
@property(nonatomic) struct tagAVCPositionalInfo avcPositionalInfo;
@property(readonly, nonatomic) const struct tagVCSpatialAudioMetadataPositionalInfo *metadataPositionalInfo;
- (void)unserialize:(id)arg1;	// IMP=0x0000000000385ac0
- (id)serialize;	// IMP=0x00000000003859fd
- (id)description;	// IMP=0x00000000003859b3
- (id)init;	// IMP=0x0000000000385958

@end


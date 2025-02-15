//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebArchivePrivate : NSObject
{
    struct RetainPtr<WebResource> cachedMainResource;	// 8 = 0x8
    struct RetainPtr<NSArray> cachedSubresources;	// 16 = 0x10
    struct RetainPtr<NSArray> cachedSubframeArchives;	// 24 = 0x18
    struct RefPtr<WebCore::LegacyWebArchive, WTF::RawPtrTraits<WebCore::LegacyWebArchive>, WTF::DefaultRefDerefTraits<WebCore::LegacyWebArchive>> coreArchive;	// 32 = 0x20
}

+ (void)initialize;	// IMP=0x00600000000dac00
- (id).cxx_construct;	// IMP=0x00000000000dae50
- (void).cxx_destruct;	// IMP=0x00000000000dadc0
- (void)dealloc;	// IMP=0x00000000000dad70
- (void)setCoreArchive:(void *)arg1;	// IMP=0x00000000000dad30
- (void *)coreArchive;	// IMP=0x00000000000dad20
- (id)initWithCoreArchive:(void *)arg1;	// IMP=0x00000000000daca0
- (id)init;	// IMP=0x00000000000dac10

@end


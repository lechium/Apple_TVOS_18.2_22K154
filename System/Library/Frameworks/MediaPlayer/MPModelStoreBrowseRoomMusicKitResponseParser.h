//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICUserIdentity, MPModelStoreBrowseContentItemBuilder, MPModelStoreBrowseSectionBuilder, MPSectionedCollection, NSIndexSet;

__attribute__((visibility("hidden")))
@interface MPModelStoreBrowseRoomMusicKitResponseParser : NSObject
{
    long long _parseOnceToken;	// 8 = 0x8
    id _rawResponseOutput;	// 16 = 0x10
    MPModelStoreBrowseSectionBuilder *_sectionBuilder;	// 24 = 0x18
    MPModelStoreBrowseContentItemBuilder *_contentItemBuilder;	// 32 = 0x20
    NSIndexSet *_filteredFCKinds;	// 40 = 0x28
    MPSectionedCollection *_results;	// 48 = 0x30
    ICUserIdentity *_userIdentity;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001a5edc
- (id)_parsedContentNode:(id)arg1 additionalAttributesFromParent:(id)arg2;	// IMP=0x00000000001a5c1c
- (id)_parsedElements:(id)arg1;	// IMP=0x00000000001a59f3
- (id)_parsedSectionedCollection;	// IMP=0x00000000001a5251
@property(readonly, nonatomic) MPSectionedCollection *results;
- (id)initWithRawResponseOutput:(id)arg1 sectionBuilder:(id)arg2 contentItemBuilder:(id)arg3 filteredFCKinds:(id)arg4 userIdentity:(id)arg5;	// IMP=0x00000000001a50eb

@end


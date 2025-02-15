//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ISConcreteIcon, NSArray;

__attribute__((visibility("hidden")))
@interface ISAliasIcon
{
    ISConcreteIcon *_icon;	// 16 = 0x10
    NSArray *_decorations;	// 24 = 0x18
    id _alias;	// 32 = 0x20
    ISConcreteIcon *_resolvedIcon;	// 40 = 0x28
}

+ (id)aliasUUID;	// IMP=0x0060000000048eff
+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000048ef7
+ (id)_iconForValues:(id)arg1;	// IMP=0x0060000000049ee6
+ (id)_iconForBookmarkData:(id)arg1;	// IMP=0x0060000000049e0c
- (void).cxx_destruct;	// IMP=0x0000000000049db9
@property(readonly) ISConcreteIcon *resolvedIcon; // @synthesize resolvedIcon=_resolvedIcon;
@property(readonly) id alias; // @synthesize alias=_alias;
- (id)decorations;	// IMP=0x0000000000049d7c
- (id)makeResourceProvider;	// IMP=0x0000000000049d1c
@property(readonly) ISConcreteIcon *icon; // @synthesize icon=_icon;
- (void)resolve;	// IMP=0x00000000000498d9
- (id)description;	// IMP=0x000000000004984f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000497b0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000495c7
- (id)initWithBookmarkData:(id)arg1 decorations:(id)arg2;	// IMP=0x00000000000492aa
- (id)initWithBookmarkData:(id)arg1;	// IMP=0x0000000000049291
- (id)initWithAliasURL:(id)arg1;	// IMP=0x0000000000048f6e

@end


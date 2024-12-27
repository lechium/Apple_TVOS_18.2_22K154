//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface GDPersonNameComponentsBuilder : NSObject
{
    NSMutableArray *_prefixes;	// 8 = 0x8
    NSMutableArray *_givenNames;	// 16 = 0x10
    NSMutableArray *_middleNames;	// 24 = 0x18
    NSMutableArray *_familyNames;	// 32 = 0x20
    NSMutableArray *_suffixes;	// 40 = 0x28
    NSMutableArray *_nicknames;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000370e3d
@property(retain, nonatomic) NSMutableArray *nicknames; // @synthesize nicknames=_nicknames;
@property(retain, nonatomic) NSMutableArray *suffixes; // @synthesize suffixes=_suffixes;
@property(retain, nonatomic) NSMutableArray *familyNames; // @synthesize familyNames=_familyNames;
@property(retain, nonatomic) NSMutableArray *middleNames; // @synthesize middleNames=_middleNames;
@property(retain, nonatomic) NSMutableArray *givenNames; // @synthesize givenNames=_givenNames;
@property(retain, nonatomic) NSMutableArray *prefixes; // @synthesize prefixes=_prefixes;
- (id)init;	// IMP=0x0000000000370cc6

@end


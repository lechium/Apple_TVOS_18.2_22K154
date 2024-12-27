//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface VCPHandObject : NSObject
{
    int _chirality;	// 8 = 0x8
    int _handID;	// 12 = 0xc
    int _groupID;	// 16 = 0x10
    int _revision;	// 20 = 0x14
    float _confidence;	// 24 = 0x18
    struct CGRect _bounds;	// 32 = 0x20
}

@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(nonatomic) int revision; // @synthesize revision=_revision;
@property(nonatomic) int groupID; // @synthesize groupID=_groupID;
@property(nonatomic) int handID; // @synthesize handID=_handID;
@property(nonatomic) int chirality; // @synthesize chirality=_chirality;

@end


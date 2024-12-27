//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface EARAudioResult : NSObject
{
    NSData *_audioResultMat;	// 8 = 0x8
    unsigned long long _audioResultsNumVectors;	// 16 = 0x10
    unsigned long long _audioResultsVectorSize;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000006b708e
@property(nonatomic) unsigned long long audioResultsVectorSize; // @synthesize audioResultsVectorSize=_audioResultsVectorSize;
@property(nonatomic) unsigned long long audioResultsNumVectors; // @synthesize audioResultsNumVectors=_audioResultsNumVectors;
@property(retain, nonatomic) NSData *audioResultMat; // @synthesize audioResultMat=_audioResultMat;
- (id)initWithAudioResultMat:(id)arg1 vectorSize:(unsigned long long)arg2 numVectors:(unsigned long long)arg3;	// IMP=0x00000000006b6f96

@end


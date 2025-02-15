//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, VCPImageHumanPoseAnalyzer;

@interface VCPHumanPoseVideoRequest
{
    int _personID;	// 60 = 0x3c
    int _preferredWidth;	// 64 = 0x40
    int _preferredHeight;	// 68 = 0x44
    unsigned int _preferredFormat;	// 72 = 0x48
    VCPImageHumanPoseAnalyzer *_analyzer;	// 80 = 0x50
    NSArray *_existingPersons;	// 88 = 0x58
    NSMutableArray *_existingPersonsArray;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000001c22c0
- (_Bool)cleanupWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001c229c
- (unsigned int)preferredPixelFormat;	// IMP=0x00000000001c228c
- (struct CGSize)preferredInputSizeWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001c226e
- (int)associatePersons:(id)arg1 withExisingPersons:(id)arg2;	// IMP=0x00000000001c14fd
- (float)normDistance:(struct CGPoint)arg1 point2:(struct CGPoint)arg2;	// IMP=0x00000000001c14db
- (void)computeVarWithID:(id)arg1 index1:(int)arg2 index2:(int)arg3 interVar:(float *)arg4 intraVar:(float *)arg5;	// IMP=0x00000000001c09fc
- (void)computeActionScoreForPerson:(id)arg1;	// IMP=0x00000000001bfe81
- (id)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withOptions:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001bf70f
- (float)bodyDistance:(id)arg1 withBodyB:(id)arg2;	// IMP=0x00000000001bf394
- (id)initWithOptions:(id)arg1;	// IMP=0x00000000001bf1ae
- (id)init;	// IMP=0x00000000001bf10e

@end


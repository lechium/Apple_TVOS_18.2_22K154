//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CIBurstImageStat : NSObject
{
    float normalizedFocusScore;	// 8 = 0x8
    float normalizedSigma;	// 12 = 0xc
    float colorHistogram[1024];	// 16 = 0x10
    int numEntries;	// 4112 = 0x1010
    unsigned short aeMatrix[256];	// 4116 = 0x1014
    int dissimilarity;	// 4628 = 0x1214
    double timeReceived;	// 4632 = 0x1218
    double timestamp;	// 4640 = 0x1220
    void *projectionMemoryBlock;	// 4648 = 0x1228
    struct FastRegistration_Signatures projectionSignature;	// 4656 = 0x1230
    struct SharpnessGridElement_t *sharpnessGrid;	// 4720 = 0x1270
    int gridWidth;	// 4728 = 0x1278
    int gridHeight;	// 4732 = 0x127c
    struct GridROI_t gridROI;	// 4736 = 0x1280
    struct GridROI_t smoothedROI;	// 4752 = 0x1290
    _Bool hasRegistrationData;	// 4768 = 0x12a0
    float maxSkewness;	// 4772 = 0x12a4
    float roiSize;	// 4776 = 0x12a8
    _Bool exclude;	// 4780 = 0x12ac
    _Bool AEStable;	// 4781 = 0x12ad
    _Bool AFStable;	// 4782 = 0x12ae
    _Bool emotionallyRejected;	// 4783 = 0x12af
    _Bool doLimitedSharpnessAndBlur;	// 4784 = 0x12b0
    _Bool isGarbage;	// 4785 = 0x12b1
    int orientation;	// 4788 = 0x12b4
    int AEAverage;	// 4792 = 0x12b8
    int AETarget;	// 4796 = 0x12bc
    int temporalOrder;	// 4800 = 0x12c0
    float avgHorzDiffY;	// 4804 = 0x12c4
    float blurExtent;	// 4808 = 0x12c8
    float imageScore;	// 4812 = 0x12cc
    float actionScore;	// 4816 = 0x12d0
    float registrationErrorX;	// 4820 = 0x12d4
    float registrationErrorY;	// 4824 = 0x12d8
    float registrationErrorIntegral;	// 4828 = 0x12dc
    float actionClusteringScore;	// 4832 = 0x12e0
    int numHWFaces;	// 4836 = 0x12e4
    float tx;	// 4840 = 0x12e8
    float ty;	// 4844 = 0x12ec
    int _AEDelta;	// 4848 = 0x12f0
    int _fullsizeJpegSize;	// 4852 = 0x12f4
    int _version;	// 4856 = 0x12f8
    NSString *imageId;	// 4864 = 0x1300
    NSMutableArray *faceStatArray;	// 4872 = 0x1308
    struct __IOSurface *_fullsizeJpegData;	// 4880 = 0x1310
    struct CGRect facesRoiRect;	// 4888 = 0x1318
}

@property int version; // @synthesize version=_version;
@property int fullsizeJpegSize; // @synthesize fullsizeJpegSize=_fullsizeJpegSize;
@property struct __IOSurface *fullsizeJpegData; // @synthesize fullsizeJpegData=_fullsizeJpegData;
@property int AEDelta; // @synthesize AEDelta=_AEDelta;
@property float roiSize; // @synthesize roiSize;
@property _Bool isGarbage; // @synthesize isGarbage;
@property float ty; // @synthesize ty;
@property float tx; // @synthesize tx;
@property _Bool doLimitedSharpnessAndBlur; // @synthesize doLimitedSharpnessAndBlur;
@property _Bool emotionallyRejected; // @synthesize emotionallyRejected;
@property int numHWFaces; // @synthesize numHWFaces;
@property struct CGRect facesRoiRect; // @synthesize facesRoiRect;
@property float actionClusteringScore; // @synthesize actionClusteringScore;
@property float registrationErrorIntegral; // @synthesize registrationErrorIntegral;
@property _Bool hasRegistrationData; // @synthesize hasRegistrationData;
@property float registrationErrorY; // @synthesize registrationErrorY;
@property float registrationErrorX; // @synthesize registrationErrorX;
@property float maxSkewness; // @synthesize maxSkewness;
@property double timestamp; // @synthesize timestamp;
@property double timeReceived; // @synthesize timeReceived;
@property float actionScore; // @synthesize actionScore;
@property float imageScore; // @synthesize imageScore;
@property float blurExtent; // @synthesize blurExtent;
@property float avgHorzDiffY; // @synthesize avgHorzDiffY;
@property int temporalOrder; // @synthesize temporalOrder;
@property _Bool AFStable; // @synthesize AFStable;
@property int AETarget; // @synthesize AETarget;
@property int AEAverage; // @synthesize AEAverage;
@property _Bool AEStable; // @synthesize AEStable;
@property _Bool exclude; // @synthesize exclude;
@property NSMutableArray *faceStatArray; // @synthesize faceStatArray;
@property int orientation; // @synthesize orientation;
@property NSString *imageId; // @synthesize imageId;
- (float *)colorHistogram;	// IMP=0x0000000000050395
- (long long)compareImageOrder:(id)arg1;	// IMP=0x0000000000050334
- (long long)compareImageStats:(id)arg1;	// IMP=0x000000000005032c
- (float)computeScore:(float)arg1;	// IMP=0x00000000000501f8
- (unsigned short *)aeMatrix;	// IMP=0x00000000000501eb
- (void)computeAEMatrix:(id)arg1;	// IMP=0x000000000005000f
- (int)setAEMatrix:(id)arg1;	// IMP=0x000000000004ff9d
- (float)computeAEMatrixDifference:(id)arg1;	// IMP=0x000000000004ff60
- (float)computeImageDistance:(id)arg1;	// IMP=0x000000000004ff11
- (float)computeSmilePercentage;	// IMP=0x000000000004fe05
- (float)computeRuleOfThreeDistance;	// IMP=0x000000000004fb6f
- (float)computeFacialFocusScoreSum;	// IMP=0x000000000004f601
- (void)collapseSharpnessGrid;	// IMP=0x000000000004f336
- (void)computeImageData:(id)arg1 faceIDCounts:(id)arg2;	// IMP=0x000000000004f0f2
- (void)writeGridROI:(id)arg1;	// IMP=0x000000000004f01d
- (int)canRegister;	// IMP=0x000000000004effc
- (void)computeImageProjections:(id)arg1;	// IMP=0x000000000004ef53
- (void)performRegistration:(id)arg1 deltaCol:(float *)arg2 deltaRow:(float *)arg3;	// IMP=0x000000000004e26e
- (void)flagAsGarbage;	// IMP=0x000000000004e24d
- (void)updateROI:(struct GridROI_t)arg1;	// IMP=0x000000000004e140
- (float)computeSmoothedGridROI:(id)arg1 nextStat:(id)arg2;	// IMP=0x000000000004de9c
- (void)computeBlurStatsOnGrid:(id)arg1;	// IMP=0x000000000004dbb7
- (void)computeImageSharpnessOnGrid:(id)arg1;	// IMP=0x000000000004da46
- (struct GridROI_t)getSharpnessAndBlurLimits;	// IMP=0x000000000004da37
- (void)computeImageColorHistogram:(id)arg1;	// IMP=0x000000000004d8af
- (void)dealloc;	// IMP=0x000000000004d822
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000004d75c
- (void)assignMeanStdBuffers:(float *)arg1;	// IMP=0x000000000004d6b1
- (void)allocateMeanStdPingPongBuffers:(float **)arg1:(float **)arg2:(float **)arg3:(float **)arg4;	// IMP=0x000000000004d605

@end


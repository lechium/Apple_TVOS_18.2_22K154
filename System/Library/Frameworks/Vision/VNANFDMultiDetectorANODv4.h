//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNANFDMultiDetectorANODv4
{
}

+ (_Bool)shouldAlignFacesForRequestWithSpecifier:(id)arg1;	// IMP=0x0040000000179658
+ (id)knownSportBallIdentifiers;	// IMP=0x00400000001795f5
+ (id)recognizedSportBallObjectClassToSportBallCategoryName;	// IMP=0x00400000001795c5
+ (id)knownAnimalHeadIdentifiers;	// IMP=0x0040000000179562
+ (id)recognizedAnimalHeadObjectClassToAnimalHeadCategoryName;	// IMP=0x0040000000179532
+ (id)detectedObjectRequestKeyToRequestInfo;	// IMP=0x00400000001794cf
+ (id)detectedObjectClassToRequestKey;	// IMP=0x004000000017946c
+ (Class)detectorClass;	// IMP=0x004000000017945b
- (id)splitDetectedClassResultsIntoSubclasses:(id)arg1;	// IMP=0x000000000017a1bd
- (_Bool)processDetectedObject:(id)arg1 originatingRequestSpecifier:(id)arg2 objectBoundingBox:(struct CGRect)arg3 objectGroupId:(id)arg4 imageBuffer:(id)arg5 qosClass:(unsigned int)arg6 session:(id)arg7 warningRecorder:(id)arg8 detectedObjectResults:(id)arg9 error:(id *)arg10;	// IMP=0x0000000000179d89

@end


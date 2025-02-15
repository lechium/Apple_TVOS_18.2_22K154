//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Symbolication/VMULeakDetector.h>

@interface LeakDetector : VMULeakDetector
{
}

+ (unsigned int)doNormalLeakDetectionWithTask:(id)arg1 graph:(id)arg2 scanner:(id)arg3 stackLogReader:(id)arg4;	// IMP=0x0040000000002167
- (unsigned int)doNormalLeakDetection;	// IMP=0x0040000000002667
- (id)initWithVMUTask:(id)arg1 graph:(id)arg2 scanner:(id)arg3 stackLogReader:(id)arg4;	// IMP=0x00100000000023a1
- (_Bool)checkTaskExistence;	// IMP=0x001000000000222f

@end


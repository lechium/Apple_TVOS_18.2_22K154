//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface AMSBagUnderlyingDataPersistence : NSObject
{
    MISSING_TYPE *directoryURL;	// 0 = 0x0
}

+ (id)persistenceWithDefaultDirectory;	// IMP=0x00600000000663dc
- (void).cxx_destruct;	// IMP=0x000000000006ad4c
- (id)init;	// IMP=0x000000000006ad16
- (_Bool)removeUnderlyingDataFor:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000069b0c
- (_Bool)persist:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000695c3
- (id)underlyingDataFor:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000677ef
- (id)initWithDirectoryURL:(id)arg1;	// IMP=0x00000000000664e0

@end


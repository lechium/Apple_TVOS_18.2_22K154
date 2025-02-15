//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ETDataTensor, NSString;
@protocol ETDataProvider;

@protocol ETTaskContext
- (_Bool)saveNetwork:(NSString *)arg1 inplace:(_Bool)arg2 error:(id *)arg3;
- (id <ETDataProvider>)doInferenceOnData:(id <ETDataProvider>)arg1 error:(id *)arg2;
- (ETDataTensor *)getTensorNamed:(NSString *)arg1;
- (_Bool)setTensorNamed:(NSString *)arg1 withValue:(ETDataTensor *)arg2 error:(id *)arg3;
@end


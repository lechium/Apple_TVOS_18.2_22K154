//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSISEngine, NSISVariable, NSString;

@protocol NSISVariableDelegate <NSObject>
- (int)nsis_orientationHintForVariable:(NSISVariable *)arg1;
- (_Bool)nsis_valueOfVariableIsUserObservable:(NSISVariable *)arg1;
- (NSString *)nsis_descriptionOfVariable:(NSISVariable *)arg1;
- (void)nsis_valueOfVariable:(NSISVariable *)arg1 didChangeInEngine:(NSISEngine *)arg2;
@end


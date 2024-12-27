//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSCalendar, NSDate, NSLocale;

@protocol PKDatePickerInternalImplementationProtocol <NSObject>
@property(retain, nonatomic) NSDate *date;
- (void)prepareToDie;
- (void)setDateValueChangedTarget:(id)arg1 action:(SEL)arg2;
- (id)initShowingDay:(_Bool)arg1 month:(_Bool)arg2 year:(_Bool)arg3 useDarkAppearance:(_Bool)arg4 locale:(NSLocale *)arg5 calendar:(NSCalendar *)arg6;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIDatePickerMode_DateWithOptionalYear
{
}

+ (long long)datePickerMode;	// IMP=0x0080000001036c4c
- (id)dateComponentsByRestrictingSelectedComponents:(id)arg1 withLastManipulatedColumn:(long long)arg2;	// IMP=0x0000000001037090
- (_Bool)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3;	// IMP=0x0000000001037021
- (void)_updateSelectedDateComponentsWithNewValueInComponent:(long long)arg1 usingSelectionBarValue:(_Bool)arg2;	// IMP=0x0000000001036f10
- (long long)rowForDate:(id)arg1 dateComponents:(id)arg2 component:(long long)arg3 currentRow:(long long)arg4;	// IMP=0x0000000001036dab
- (long long)yearForRow:(long long)arg1;	// IMP=0x0000000001036d27
- (id)titleForRow:(long long)arg1 inComponent:(long long)arg2;	// IMP=0x0000000001036c9f
- (long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1;	// IMP=0x0000000001036c57

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBLeafIcon.h>

@class NSArray, SBHWidget;
@protocol SBLeafIconDataSource;

@interface SBWidgetIcon : SBLeafIcon
{
    _Bool _allowsSuggestions;
    _Bool _allowsExternalSuggestions;
    id <SBLeafIconDataSource> _lastUserSelectedDataSource;
    unsigned long long _stackChangeReason;
}


// Remaining properties
@property(retain, nonatomic) SBHWidget *activeWidget;
@property(nonatomic) _Bool allowsExternalSuggestions; // @synthesize allowsExternalSuggestions=_allowsExternalSuggestions;
@property(nonatomic) _Bool allowsSuggestions; // @synthesize allowsSuggestions=_allowsSuggestions;
@property(readonly, nonatomic) unsigned long long iconDataSourcesExcludingSuggestionsCount;
@property(retain, nonatomic) id <SBLeafIconDataSource> lastUserSelectedDataSource; // @synthesize lastUserSelectedDataSource=_lastUserSelectedDataSource;
@property(nonatomic) unsigned long long stackChangeReason; // @synthesize stackChangeReason=_stackChangeReason;
@property(readonly, copy, nonatomic) NSArray *widgets;
@end

/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _MFSearchResultsConsumer <NSObject>
@required
-(void)_addResults:(id)arg1 ofType:(unsigned long long)arg2;
-(BOOL)_shouldProcessResultsAfterFinishingType:(unsigned long long)arg1;
-(BOOL)_didFinishSearchForType:(unsigned long long)arg1;
-(void)_enumerateSearchResultTypesInSortOrderUsingBlock:(/*^block*/id)arg1;
-(void)_appendSortedResultsOfType:(unsigned long long)arg1 excluding:(id)arg2 toResults:(id)arg3;
-(BOOL)_isResetting;

@end

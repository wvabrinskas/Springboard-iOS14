/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsShortcutStorage.h>

@class NSArray, NSError, NSString;

@interface MapsSuggestionsFakeShortcutStorage : NSObject <MapsSuggestionsShortcutStorage> {

	ReadWriteQueue _rwQueue;
	NSArray* _fakeResults;
	NSArray* _passedInput;
	NSError* _fakeError;
	unsigned long long _calledLoad;
	unsigned long long _calledAddOrUpdate;
	unsigned long long _calledRemove;
	unsigned long long _calledMove;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setChangeHandler:(/*^block*/id)arg1 ;
-(NSString *)uniqueName;
-(char)addOrUpdateShortcuts:(id)arg1 handler:(/*^block*/id)arg2 ;
-(char)moveShortcutToBack:(id)arg1 handler:(/*^block*/id)arg2 ;
-(char)moveShortcut:(id)arg1 afterShortcut:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)reset;
-(char)moveShortcut:(id)arg1 toIndex:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(char)removeShortcuts:(id)arg1 handler:(/*^block*/id)arg2 ;
-(char)moveShortcutToFront:(id)arg1 handler:(/*^block*/id)arg2 ;
-(char)loadAllShortcutsWithHandler:(/*^block*/id)arg1 ;
-(void)configureError:(id)arg1 ;
-(char)moveShortcut:(id)arg1 beforeShortcut:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)configureResults:(id)arg1 ;
-(id)passedInput;
-(unsigned long long)calledRequestLoad;
-(unsigned long long)calledAddOrUpdate;
-(unsigned long long)calledRemove;
-(unsigned long long)calledMove;
@end

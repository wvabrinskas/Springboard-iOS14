/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreAutoLayout/NSISVariable.h>
#import <libobjc.A.dylib/NSISVariableDelegate.h>

@class NSString;

@interface NSISInlineStorageVariable : NSISVariable <NSISVariableDelegate> {

	NSString* _name;
	int _valueRestriction;
	BOOL _shouldBeMinimized;
	BOOL _valueIsUserObservable;

}

@property (copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (assign) int valueRestriction;                            //@synthesize valueRestriction=_valueRestriction - In the implementation block
@property (assign) BOOL shouldBeMinimized;                          //@synthesize shouldBeMinimized=_shouldBeMinimized - In the implementation block
@property (assign) BOOL valueIsUserObservable;                      //@synthesize valueIsUserObservable=_valueIsUserObservable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldBeMinimized;
-(BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)nsis_descriptionOfVariable:(id)arg1 ;
-(void)setValueRestriction:(int)arg1 ;
-(id)markedConstraint;
-(id)initWithCoder:(id)arg1 ;
-(void)setValueIsUserObservable:(BOOL)arg1 ;
-(void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2 ;
-(void)setShouldBeMinimized:(BOOL)arg1 ;
-(int)valueRestriction;
-(BOOL)valueIsUserObservable;
-(int)nsis_orientationHintForVariable:(id)arg1 ;
-(oneway void)dealloc;
-(void)setName:(NSString *)arg1 ;
@end

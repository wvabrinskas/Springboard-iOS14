/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, TIKeyboardCandidate;

@interface UITextSuggestion : NSObject <NSCopying> {

	BOOL _displayStylePlain;
	BOOL __shouldPersist;
	NSString* _inputText;
	NSString* _searchText;
	NSString* _displayText;
	NSString* _headerText;

}

@property (nonatomic,readonly) BOOL _shouldPersist;                                   //@synthesize _shouldPersist=__shouldPersist - In the implementation block
@property (nonatomic,readonly) TIKeyboardCandidate * _keyboardCandidate; 
@property (nonatomic,copy,readonly) NSString * inputText;                             //@synthesize inputText=_inputText - In the implementation block
@property (nonatomic,copy) NSString * searchText;                                     //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,copy) NSString * displayText;                                    //@synthesize displayText=_displayText - In the implementation block
@property (nonatomic,copy) NSString * headerText;                                     //@synthesize headerText=_headerText - In the implementation block
@property (assign,nonatomic) BOOL displayStylePlain;                                  //@synthesize displayStylePlain=_displayStylePlain - In the implementation block
+(id)textSuggestionWithInputText:(id)arg1 ;
+(id)textSuggestionWithInputText:(id)arg1 searchText:(id)arg2 ;
-(NSString *)inputText;
-(TIKeyboardCandidate *)_keyboardCandidate;
-(NSString *)searchText;
-(NSString *)headerText;
-(NSString *)displayText;
-(void)setSearchText:(NSString *)arg1 ;
-(id)initWithInputText:(id)arg1 searchText:(id)arg2 displayText:(id)arg3 headerText:(id)arg4 ;
-(void)setDisplayText:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHeaderText:(NSString *)arg1 ;
-(BOOL)displayStylePlain;
-(void)setDisplayStylePlain:(BOOL)arg1 ;
-(BOOL)_shouldPersist;
@end

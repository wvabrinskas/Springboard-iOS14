/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class INPerson, NSString;


@protocol INShowPersonInteractionsIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INPerson * person; 
@property (nonatomic,copy) NSString * focusItemIdentifier; 
@required
-(void)setPerson:(id)arg1;
-(id)init;
-(INPerson *)person;
-(void)setFocusItemIdentifier:(id)arg1;
-(NSString *)focusItemIdentifier;

@end


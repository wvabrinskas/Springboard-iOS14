/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSSet;

@interface CNUICoreContactScratchpad : NSObject {

	NSSet* _edits;

}

@property (nonatomic,readonly) NSSet * edits;                         //@synthesize edits=_edits - In the implementation block
@property (nonatomic,readonly) NSSet * allContacts; 
@property (nonatomic,readonly) NSSet * modifiedContacts; 
+(id)scratchpadBySettingModifiedContact:(id)arg1 onExistingEditInScratchpad:(id)arg2 ;
+(id)scratchpadByAddingUneditedContact:(id)arg1 toScratchpad:(id)arg2 ;
+(id)scratchpadByRemovingModifiedContact:(id)arg1 fromScratchpad:(id)arg2 ;
+(id)editMatchingContact:(id)arg1 inEdits:(id)arg2 ;
+(id)editsByReplacingEdit:(id)arg1 withUpdatedEdit:(id)arg2 inEdits:(id)arg3 ;
+(id)emptyScratchpad;
-(id)init;
-(unsigned long long)hash;
-(NSSet *)edits;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSSet *)allContacts;
-(BOOL)containsContact:(id)arg1 ;
-(id)initWithEdits:(id)arg1 ;
-(id)scratchpadByRemovingContacts:(id)arg1 ;
-(id)scratchpadByAddingContacts:(id)arg1 ;
-(id)modifiedContactForContact:(id)arg1 ;
-(id)scratchpadByKeepingContacts:(id)arg1 ;
-(id)modifiedIfPresentOtherwiseOriginalContactForContact:(id)arg1 ;
-(NSSet *)modifiedContacts;
@end

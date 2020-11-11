/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/AXEventRepresentationDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AXEventKeyInfoRepresentation : NSObject <AXEventRepresentationDescription, NSSecureCoding, NSCopying> {

	BOOL _keyDown;
	unsigned short _keyCode;
	unsigned short _alternativeKeyCode;
	unsigned _usagePage;
	unsigned _modifierState;
	unsigned _gsModifierState;
	NSString* _unmodifiedInput;
	NSString* _modifiedInput;
	NSString* _shiftModifiedInput;
	NSString* _backupUnmodifiedInput;
	NSString* _backupModifiedInput;
	NSString* _backupShiftModifiedInput;

}

@property (assign,nonatomic) unsigned short keyCode;                         //@synthesize keyCode=_keyCode - In the implementation block
@property (assign,nonatomic) unsigned short alternativeKeyCode;              //@synthesize alternativeKeyCode=_alternativeKeyCode - In the implementation block
@property (assign,nonatomic) unsigned usagePage;                             //@synthesize usagePage=_usagePage - In the implementation block
@property (assign,nonatomic) BOOL keyDown;                                   //@synthesize keyDown=_keyDown - In the implementation block
@property (nonatomic,copy) NSString * unmodifiedInput;                       //@synthesize unmodifiedInput=_unmodifiedInput - In the implementation block
@property (nonatomic,copy) NSString * modifiedInput;                         //@synthesize modifiedInput=_modifiedInput - In the implementation block
@property (nonatomic,copy) NSString * shiftModifiedInput;                    //@synthesize shiftModifiedInput=_shiftModifiedInput - In the implementation block
@property (assign,nonatomic) unsigned modifierState;                         //@synthesize modifierState=_modifierState - In the implementation block
@property (nonatomic,copy) NSString * backupUnmodifiedInput;                 //@synthesize backupUnmodifiedInput=_backupUnmodifiedInput - In the implementation block
@property (nonatomic,copy) NSString * backupModifiedInput;                   //@synthesize backupModifiedInput=_backupModifiedInput - In the implementation block
@property (nonatomic,copy) NSString * backupShiftModifiedInput;              //@synthesize backupShiftModifiedInput=_backupShiftModifiedInput - In the implementation block
@property (assign,nonatomic) unsigned gsModifierState;                       //@synthesize gsModifierState=_gsModifierState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(GSKeyboardRef)_getUIKitKeyboardRef;
+(GSKeyboardRef)_getUSUIKitKeyboardRef;
+(void)prepareForKeycodeTranslation;
-(NSString *)unmodifiedInput;
-(NSString *)shiftModifiedInput;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)modifierState;
-(void)setUsagePage:(unsigned)arg1 ;
-(void)setKeyDown:(BOOL)arg1 ;
-(void)setModifiedInput:(NSString *)arg1 ;
-(void)setBackupUnmodifiedInput:(NSString *)arg1 ;
-(void)setBackupModifiedInput:(NSString *)arg1 ;
-(void)setBackupShiftModifiedInput:(NSString *)arg1 ;
-(void)setModifierState:(unsigned)arg1 ;
-(void)setGsModifierState:(unsigned)arg1 ;
-(void)setAlternativeKeyCode:(unsigned short)arg1 ;
-(unsigned)gsModifierState;
-(unsigned short)alternativeKeyCode;
-(NSString *)backupUnmodifiedInput;
-(NSString *)backupShiftModifiedInput;
-(NSString *)backupModifiedInput;
-(GSKeyboardRef)_getUIKitKeyboardRef;
-(GSKeyboardRef)_getUSUIKitKeyboardRef;
-(void)translateStringToKeycode;
-(void)translateKeycode;
-(BOOL)keyDown;
-(NSString *)description;
-(unsigned short)keyCode;
-(unsigned)usagePage;
-(void)setUnmodifiedInput:(NSString *)arg1 ;
-(void)setShiftModifiedInput:(NSString *)arg1 ;
-(id)accessibilityEventRepresentationTabularDescription;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)modifiedInput;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKeyCode:(unsigned short)arg1 ;
@end

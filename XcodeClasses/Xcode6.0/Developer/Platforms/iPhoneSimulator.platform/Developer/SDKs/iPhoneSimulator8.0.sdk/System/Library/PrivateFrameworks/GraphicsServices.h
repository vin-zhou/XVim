//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GraphicsServices.framework/GraphicsServices
// UUID: 7B34A58B-127A-31EC-9900-EFFA0CE70BF0
//
//                           Arch: x86_64
//                Current version: 14.0.0
//          Compatibility version: 1.0.0
//                 Source version: 610.0.0.0.0
//            Minimum iOS version: 8.0.0
//                    SDK version: 8.0.0
//
// Objective-C Garbage Collection: Unsupported
//

@interface _UIFontExtraData : NSObject
{
    NSData *_latin1MappingTable;
    NSCharacterSet *_coveredCharacterSet;
    double _ascender;
    double _descender;
    double _lineHeight;
    double _lineGap;
    struct __fFlags {
        unsigned int _initialized:1;
        unsigned int _isSystemFont:1;
        unsigned int _hasKernPair:1;
        unsigned int _checkedLatin1Table:1;
        unsigned int _isIBTextStyleFont:1;
    } _fFlags;
}

- (void)dealloc;

@end


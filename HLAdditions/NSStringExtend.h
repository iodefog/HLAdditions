//
//  NSStringExtend.h
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#pragma mark -
@interface NSString(ExtendedForUrlComponents)
- (NSString *)stringByAppendingUrlComponent:(NSString *)urlComponent;
- (NSString *)stringByAppendingUrlParameter:(NSString *)param forKey:(NSString *)key;
- (NSString *)urlStringByAppendingUrlParameter:(NSString *)parameter forKey:(NSString *)key;
- (NSDictionary*)parametersUsingEncoding:(NSStringEncoding)encoding;
- (NSString*)stringByAddingParameters:(NSDictionary*)parameters;

- (NSString *)stringByAddPrefix:(NSString *)prefix;

- (BOOL)isNmuberString;
- (BOOL)isEmailString;
@end

#pragma mark -
@interface NSString(MD5Extended)
+ (NSString *)stringWithUUIDGenerated;
+ (NSString *)generatingMD5:(NSArray *)array;

////added ypc
//- (NSString*)md5Hash;
@end


#pragma mark -
@interface NSString (CoreTextExtention)
- (NSArray *)splitStringWithFont:(UIFont *)font constrainedToWidth:(CGFloat)lineWidth;
@end


#pragma mark -
@interface NSString (WhitespaceExtention)
- (id) trimmedString;
- (BOOL)isWhitespaceAndNewlines;
- (BOOL)isEmptyOrWhitespace;
@end

#pragma mark -
@interface NSString (HexString2Data)
- (NSData*)hexString2Data;
@end

#pragma mark -
@interface NSString (StringSizeExtention)

- (CGSize)stringSizeWithFont:(UIFont *)font;

- (CGSize)sizeWithFont:(UIFont *)font;

- (CGSize)sizeWithFont:(UIFont *)font
     constrainedToSize:(CGSize)size;

- (CGSize)sizeWithFont:(UIFont *)font
     constrainedToSize:(CGSize)size
         lineBreakMode:(NSLineBreakMode)lineBreakMode
             alignment:(NSTextAlignment)alignment;

- (CGSize)sizeWithFont:(UIFont *)font
              forWidth:(CGFloat)width
         lineBreakMode:(NSLineBreakMode)lineBreakMode;

- (void)drawInRect:(CGRect)rect withFont:(UIFont *)font color:(UIColor *)color lineBreakMode:(NSLineBreakMode)lineBreakMode alignment:(NSTextAlignment)alignment;

@end

#pragma mark -
@interface NSString (Contains)

- (BOOL)containString:(NSString *)str;

@end


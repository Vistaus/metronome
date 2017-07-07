/* Settings.c generated by valac 0.34.9, the Vala compiler
 * generated from Settings.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <granite.h>
#include <float.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


#define METRONOME_TYPE_SETTINGS (metronome_settings_get_type ())
#define METRONOME_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), METRONOME_TYPE_SETTINGS, MetronomeSettings))
#define METRONOME_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), METRONOME_TYPE_SETTINGS, MetronomeSettingsClass))
#define METRONOME_IS_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), METRONOME_TYPE_SETTINGS))
#define METRONOME_IS_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), METRONOME_TYPE_SETTINGS))
#define METRONOME_SETTINGS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), METRONOME_TYPE_SETTINGS, MetronomeSettingsClass))

typedef struct _MetronomeSettings MetronomeSettings;
typedef struct _MetronomeSettingsClass MetronomeSettingsClass;
typedef struct _MetronomeSettingsPrivate MetronomeSettingsPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _MetronomeSettings {
	GraniteServicesSettings parent_instance;
	MetronomeSettingsPrivate * priv;
};

struct _MetronomeSettingsClass {
	GraniteServicesSettingsClass parent_class;
};

struct _MetronomeSettingsPrivate {
	gdouble _volume_semibreve;
	gdouble _volume_minim;
	gdouble _volume_crotchet;
	gdouble _volume_quaver;
	gint _tempo;
	gint _beat;
	gchar** _custom_settings;
	gint _custom_settings_length1;
	gint __custom_settings_size_;
};


static gpointer metronome_settings_parent_class = NULL;
static MetronomeSettings* metronome_settings_settings;
static MetronomeSettings* metronome_settings_settings = NULL;

GType metronome_settings_get_type (void) G_GNUC_CONST;
#define METRONOME_SETTINGS_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), METRONOME_TYPE_SETTINGS, MetronomeSettingsPrivate))
enum  {
	METRONOME_SETTINGS_DUMMY_PROPERTY,
	METRONOME_SETTINGS_VOLUME_SEMIBREVE,
	METRONOME_SETTINGS_VOLUME_MINIM,
	METRONOME_SETTINGS_VOLUME_CROTCHET,
	METRONOME_SETTINGS_VOLUME_QUAVER,
	METRONOME_SETTINGS_TEMPO,
	METRONOME_SETTINGS_BEAT,
	METRONOME_SETTINGS_CUSTOM_SETTINGS
};
MetronomeSettings* metronome_settings_get_default (void);
static MetronomeSettings* metronome_settings_new (void);
static MetronomeSettings* metronome_settings_construct (GType object_type);
gdouble metronome_settings_get_volume_semibreve (MetronomeSettings* self);
void metronome_settings_set_volume_semibreve (MetronomeSettings* self, gdouble value);
gdouble metronome_settings_get_volume_minim (MetronomeSettings* self);
void metronome_settings_set_volume_minim (MetronomeSettings* self, gdouble value);
gdouble metronome_settings_get_volume_crotchet (MetronomeSettings* self);
void metronome_settings_set_volume_crotchet (MetronomeSettings* self, gdouble value);
gdouble metronome_settings_get_volume_quaver (MetronomeSettings* self);
void metronome_settings_set_volume_quaver (MetronomeSettings* self, gdouble value);
gint metronome_settings_get_tempo (MetronomeSettings* self);
void metronome_settings_set_tempo (MetronomeSettings* self, gint value);
gint metronome_settings_get_beat (MetronomeSettings* self);
void metronome_settings_set_beat (MetronomeSettings* self, gint value);
gchar** metronome_settings_get_custom_settings (MetronomeSettings* self, int* result_length1);
void metronome_settings_set_custom_settings (MetronomeSettings* self, gchar** value, int value_length1);
static gchar** _vala_array_dup2 (gchar** self, int length);
static void metronome_settings_finalize (GObject* obj);
static void _vala_metronome_settings_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_metronome_settings_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


static gpointer _g_object_ref0 (gpointer self) {
#line 7 "/home/artem/metronome/src/Settings.vala"
	return self ? g_object_ref (self) : NULL;
#line 93 "Settings.c"
}


MetronomeSettings* metronome_settings_get_default (void) {
	MetronomeSettings* result = NULL;
	MetronomeSettings* _tmp0_ = NULL;
	MetronomeSettings* _tmp2_ = NULL;
	MetronomeSettings* _tmp3_ = NULL;
#line 4 "/home/artem/metronome/src/Settings.vala"
	_tmp0_ = metronome_settings_settings;
#line 4 "/home/artem/metronome/src/Settings.vala"
	if (_tmp0_ == NULL) {
#line 106 "Settings.c"
		MetronomeSettings* _tmp1_ = NULL;
#line 5 "/home/artem/metronome/src/Settings.vala"
		_tmp1_ = metronome_settings_new ();
#line 5 "/home/artem/metronome/src/Settings.vala"
		_g_object_unref0 (metronome_settings_settings);
#line 5 "/home/artem/metronome/src/Settings.vala"
		metronome_settings_settings = _tmp1_;
#line 114 "Settings.c"
	}
#line 7 "/home/artem/metronome/src/Settings.vala"
	_tmp2_ = metronome_settings_settings;
#line 7 "/home/artem/metronome/src/Settings.vala"
	_tmp3_ = _g_object_ref0 (_tmp2_);
#line 7 "/home/artem/metronome/src/Settings.vala"
	result = _tmp3_;
#line 7 "/home/artem/metronome/src/Settings.vala"
	return result;
#line 124 "Settings.c"
}


static MetronomeSettings* metronome_settings_construct (GType object_type) {
	MetronomeSettings * self = NULL;
#line 18 "/home/artem/metronome/src/Settings.vala"
	self = (MetronomeSettings*) granite_services_settings_construct (object_type, "org.pantheon.metronome");
#line 17 "/home/artem/metronome/src/Settings.vala"
	return self;
#line 134 "Settings.c"
}


static MetronomeSettings* metronome_settings_new (void) {
#line 17 "/home/artem/metronome/src/Settings.vala"
	return metronome_settings_construct (METRONOME_TYPE_SETTINGS);
#line 141 "Settings.c"
}


gdouble metronome_settings_get_volume_semibreve (MetronomeSettings* self) {
	gdouble result;
	gdouble _tmp0_ = 0.0;
#line 10 "/home/artem/metronome/src/Settings.vala"
	g_return_val_if_fail (self != NULL, 0.0);
#line 10 "/home/artem/metronome/src/Settings.vala"
	_tmp0_ = self->priv->_volume_semibreve;
#line 10 "/home/artem/metronome/src/Settings.vala"
	result = _tmp0_;
#line 10 "/home/artem/metronome/src/Settings.vala"
	return result;
#line 156 "Settings.c"
}


void metronome_settings_set_volume_semibreve (MetronomeSettings* self, gdouble value) {
	gdouble _tmp0_ = 0.0;
#line 10 "/home/artem/metronome/src/Settings.vala"
	g_return_if_fail (self != NULL);
#line 10 "/home/artem/metronome/src/Settings.vala"
	_tmp0_ = value;
#line 10 "/home/artem/metronome/src/Settings.vala"
	self->priv->_volume_semibreve = _tmp0_;
#line 10 "/home/artem/metronome/src/Settings.vala"
	g_object_notify ((GObject *) self, "volume-semibreve");
#line 170 "Settings.c"
}


gdouble metronome_settings_get_volume_minim (MetronomeSettings* self) {
	gdouble result;
	gdouble _tmp0_ = 0.0;
#line 11 "/home/artem/metronome/src/Settings.vala"
	g_return_val_if_fail (self != NULL, 0.0);
#line 11 "/home/artem/metronome/src/Settings.vala"
	_tmp0_ = self->priv->_volume_minim;
#line 11 "/home/artem/metronome/src/Settings.vala"
	result = _tmp0_;
#line 11 "/home/artem/metronome/src/Settings.vala"
	return result;
#line 185 "Settings.c"
}


void metronome_settings_set_volume_minim (MetronomeSettings* self, gdouble value) {
	gdouble _tmp0_ = 0.0;
#line 11 "/home/artem/metronome/src/Settings.vala"
	g_return_if_fail (self != NULL);
#line 11 "/home/artem/metronome/src/Settings.vala"
	_tmp0_ = value;
#line 11 "/home/artem/metronome/src/Settings.vala"
	self->priv->_volume_minim = _tmp0_;
#line 11 "/home/artem/metronome/src/Settings.vala"
	g_object_notify ((GObject *) self, "volume-minim");
#line 199 "Settings.c"
}


gdouble metronome_settings_get_volume_crotchet (MetronomeSettings* self) {
	gdouble result;
	gdouble _tmp0_ = 0.0;
#line 12 "/home/artem/metronome/src/Settings.vala"
	g_return_val_if_fail (self != NULL, 0.0);
#line 12 "/home/artem/metronome/src/Settings.vala"
	_tmp0_ = self->priv->_volume_crotchet;
#line 12 "/home/artem/metronome/src/Settings.vala"
	result = _tmp0_;
#line 12 "/home/artem/metronome/src/Settings.vala"
	return result;
#line 214 "Settings.c"
}


void metronome_settings_set_volume_crotchet (MetronomeSettings* self, gdouble value) {
	gdouble _tmp0_ = 0.0;
#line 12 "/home/artem/metronome/src/Settings.vala"
	g_return_if_fail (self != NULL);
#line 12 "/home/artem/metronome/src/Settings.vala"
	_tmp0_ = value;
#line 12 "/home/artem/metronome/src/Settings.vala"
	self->priv->_volume_crotchet = _tmp0_;
#line 12 "/home/artem/metronome/src/Settings.vala"
	g_object_notify ((GObject *) self, "volume-crotchet");
#line 228 "Settings.c"
}


gdouble metronome_settings_get_volume_quaver (MetronomeSettings* self) {
	gdouble result;
	gdouble _tmp0_ = 0.0;
#line 13 "/home/artem/metronome/src/Settings.vala"
	g_return_val_if_fail (self != NULL, 0.0);
#line 13 "/home/artem/metronome/src/Settings.vala"
	_tmp0_ = self->priv->_volume_quaver;
#line 13 "/home/artem/metronome/src/Settings.vala"
	result = _tmp0_;
#line 13 "/home/artem/metronome/src/Settings.vala"
	return result;
#line 243 "Settings.c"
}


void metronome_settings_set_volume_quaver (MetronomeSettings* self, gdouble value) {
	gdouble _tmp0_ = 0.0;
#line 13 "/home/artem/metronome/src/Settings.vala"
	g_return_if_fail (self != NULL);
#line 13 "/home/artem/metronome/src/Settings.vala"
	_tmp0_ = value;
#line 13 "/home/artem/metronome/src/Settings.vala"
	self->priv->_volume_quaver = _tmp0_;
#line 13 "/home/artem/metronome/src/Settings.vala"
	g_object_notify ((GObject *) self, "volume-quaver");
#line 257 "Settings.c"
}


gint metronome_settings_get_tempo (MetronomeSettings* self) {
	gint result;
	gint _tmp0_ = 0;
#line 14 "/home/artem/metronome/src/Settings.vala"
	g_return_val_if_fail (self != NULL, 0);
#line 14 "/home/artem/metronome/src/Settings.vala"
	_tmp0_ = self->priv->_tempo;
#line 14 "/home/artem/metronome/src/Settings.vala"
	result = _tmp0_;
#line 14 "/home/artem/metronome/src/Settings.vala"
	return result;
#line 272 "Settings.c"
}


void metronome_settings_set_tempo (MetronomeSettings* self, gint value) {
	gint _tmp0_ = 0;
#line 14 "/home/artem/metronome/src/Settings.vala"
	g_return_if_fail (self != NULL);
#line 14 "/home/artem/metronome/src/Settings.vala"
	_tmp0_ = value;
#line 14 "/home/artem/metronome/src/Settings.vala"
	self->priv->_tempo = _tmp0_;
#line 14 "/home/artem/metronome/src/Settings.vala"
	g_object_notify ((GObject *) self, "tempo");
#line 286 "Settings.c"
}


gint metronome_settings_get_beat (MetronomeSettings* self) {
	gint result;
	gint _tmp0_ = 0;
#line 15 "/home/artem/metronome/src/Settings.vala"
	g_return_val_if_fail (self != NULL, 0);
#line 15 "/home/artem/metronome/src/Settings.vala"
	_tmp0_ = self->priv->_beat;
#line 15 "/home/artem/metronome/src/Settings.vala"
	result = _tmp0_;
#line 15 "/home/artem/metronome/src/Settings.vala"
	return result;
#line 301 "Settings.c"
}


void metronome_settings_set_beat (MetronomeSettings* self, gint value) {
	gint _tmp0_ = 0;
#line 15 "/home/artem/metronome/src/Settings.vala"
	g_return_if_fail (self != NULL);
#line 15 "/home/artem/metronome/src/Settings.vala"
	_tmp0_ = value;
#line 15 "/home/artem/metronome/src/Settings.vala"
	self->priv->_beat = _tmp0_;
#line 15 "/home/artem/metronome/src/Settings.vala"
	g_object_notify ((GObject *) self, "beat");
#line 315 "Settings.c"
}


gchar** metronome_settings_get_custom_settings (MetronomeSettings* self, int* result_length1) {
	gchar** result;
	gchar** _tmp0_ = NULL;
	gint _tmp0__length1 = 0;
	gchar** _tmp1_ = NULL;
	gint _tmp1__length1 = 0;
#line 16 "/home/artem/metronome/src/Settings.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 16 "/home/artem/metronome/src/Settings.vala"
	_tmp0_ = self->priv->_custom_settings;
#line 16 "/home/artem/metronome/src/Settings.vala"
	_tmp0__length1 = self->priv->_custom_settings_length1;
#line 16 "/home/artem/metronome/src/Settings.vala"
	_tmp1_ = _tmp0_;
#line 16 "/home/artem/metronome/src/Settings.vala"
	_tmp1__length1 = _tmp0__length1;
#line 16 "/home/artem/metronome/src/Settings.vala"
	if (result_length1) {
#line 16 "/home/artem/metronome/src/Settings.vala"
		*result_length1 = _tmp1__length1;
#line 339 "Settings.c"
	}
#line 16 "/home/artem/metronome/src/Settings.vala"
	result = _tmp1_;
#line 16 "/home/artem/metronome/src/Settings.vala"
	return result;
#line 345 "Settings.c"
}


static gchar** _vala_array_dup2 (gchar** self, int length) {
	gchar** result;
	int i;
#line 16 "/home/artem/metronome/src/Settings.vala"
	result = g_new0 (gchar*, length + 1);
#line 16 "/home/artem/metronome/src/Settings.vala"
	for (i = 0; i < length; i++) {
#line 356 "Settings.c"
		gchar* _tmp0_ = NULL;
#line 16 "/home/artem/metronome/src/Settings.vala"
		_tmp0_ = g_strdup (self[i]);
#line 16 "/home/artem/metronome/src/Settings.vala"
		result[i] = _tmp0_;
#line 362 "Settings.c"
	}
#line 16 "/home/artem/metronome/src/Settings.vala"
	return result;
#line 366 "Settings.c"
}


void metronome_settings_set_custom_settings (MetronomeSettings* self, gchar** value, int value_length1) {
	gchar** _tmp0_ = NULL;
	gint _tmp0__length1 = 0;
	gchar** _tmp1_ = NULL;
	gint _tmp1__length1 = 0;
#line 16 "/home/artem/metronome/src/Settings.vala"
	g_return_if_fail (self != NULL);
#line 16 "/home/artem/metronome/src/Settings.vala"
	_tmp0_ = value;
#line 16 "/home/artem/metronome/src/Settings.vala"
	_tmp0__length1 = value_length1;
#line 16 "/home/artem/metronome/src/Settings.vala"
	_tmp1_ = (_tmp0_ != NULL) ? _vala_array_dup2 (_tmp0_, _tmp0__length1) : ((gpointer) _tmp0_);
#line 16 "/home/artem/metronome/src/Settings.vala"
	_tmp1__length1 = _tmp0__length1;
#line 16 "/home/artem/metronome/src/Settings.vala"
	self->priv->_custom_settings = (_vala_array_free (self->priv->_custom_settings, self->priv->_custom_settings_length1, (GDestroyNotify) g_free), NULL);
#line 16 "/home/artem/metronome/src/Settings.vala"
	self->priv->_custom_settings = _tmp1_;
#line 16 "/home/artem/metronome/src/Settings.vala"
	self->priv->_custom_settings_length1 = _tmp1__length1;
#line 16 "/home/artem/metronome/src/Settings.vala"
	self->priv->__custom_settings_size_ = self->priv->_custom_settings_length1;
#line 16 "/home/artem/metronome/src/Settings.vala"
	g_object_notify ((GObject *) self, "custom-settings");
#line 395 "Settings.c"
}


static void metronome_settings_class_init (MetronomeSettingsClass * klass) {
#line 1 "/home/artem/metronome/src/Settings.vala"
	metronome_settings_parent_class = g_type_class_peek_parent (klass);
#line 1 "/home/artem/metronome/src/Settings.vala"
	g_type_class_add_private (klass, sizeof (MetronomeSettingsPrivate));
#line 1 "/home/artem/metronome/src/Settings.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_metronome_settings_get_property;
#line 1 "/home/artem/metronome/src/Settings.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_metronome_settings_set_property;
#line 1 "/home/artem/metronome/src/Settings.vala"
	G_OBJECT_CLASS (klass)->finalize = metronome_settings_finalize;
#line 1 "/home/artem/metronome/src/Settings.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), METRONOME_SETTINGS_VOLUME_SEMIBREVE, g_param_spec_double ("volume-semibreve", "volume-semibreve", "volume-semibreve", -G_MAXDOUBLE, G_MAXDOUBLE, 0.0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 1 "/home/artem/metronome/src/Settings.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), METRONOME_SETTINGS_VOLUME_MINIM, g_param_spec_double ("volume-minim", "volume-minim", "volume-minim", -G_MAXDOUBLE, G_MAXDOUBLE, 0.0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 1 "/home/artem/metronome/src/Settings.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), METRONOME_SETTINGS_VOLUME_CROTCHET, g_param_spec_double ("volume-crotchet", "volume-crotchet", "volume-crotchet", -G_MAXDOUBLE, G_MAXDOUBLE, 0.0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 1 "/home/artem/metronome/src/Settings.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), METRONOME_SETTINGS_VOLUME_QUAVER, g_param_spec_double ("volume-quaver", "volume-quaver", "volume-quaver", -G_MAXDOUBLE, G_MAXDOUBLE, 0.0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 1 "/home/artem/metronome/src/Settings.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), METRONOME_SETTINGS_TEMPO, g_param_spec_int ("tempo", "tempo", "tempo", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 1 "/home/artem/metronome/src/Settings.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), METRONOME_SETTINGS_BEAT, g_param_spec_int ("beat", "beat", "beat", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 1 "/home/artem/metronome/src/Settings.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), METRONOME_SETTINGS_CUSTOM_SETTINGS, g_param_spec_boxed ("custom-settings", "custom-settings", "custom-settings", G_TYPE_STRV, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 424 "Settings.c"
}


static void metronome_settings_instance_init (MetronomeSettings * self) {
#line 1 "/home/artem/metronome/src/Settings.vala"
	self->priv = METRONOME_SETTINGS_GET_PRIVATE (self);
#line 431 "Settings.c"
}


static void metronome_settings_finalize (GObject* obj) {
	MetronomeSettings * self;
#line 1 "/home/artem/metronome/src/Settings.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, METRONOME_TYPE_SETTINGS, MetronomeSettings);
#line 16 "/home/artem/metronome/src/Settings.vala"
	self->priv->_custom_settings = (_vala_array_free (self->priv->_custom_settings, self->priv->_custom_settings_length1, (GDestroyNotify) g_free), NULL);
#line 1 "/home/artem/metronome/src/Settings.vala"
	G_OBJECT_CLASS (metronome_settings_parent_class)->finalize (obj);
#line 443 "Settings.c"
}


GType metronome_settings_get_type (void) {
	static volatile gsize metronome_settings_type_id__volatile = 0;
	if (g_once_init_enter (&metronome_settings_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (MetronomeSettingsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) metronome_settings_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (MetronomeSettings), 0, (GInstanceInitFunc) metronome_settings_instance_init, NULL };
		GType metronome_settings_type_id;
		metronome_settings_type_id = g_type_register_static (GRANITE_SERVICES_TYPE_SETTINGS, "MetronomeSettings", &g_define_type_info, 0);
		g_once_init_leave (&metronome_settings_type_id__volatile, metronome_settings_type_id);
	}
	return metronome_settings_type_id__volatile;
}


static void _vala_metronome_settings_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	MetronomeSettings * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, METRONOME_TYPE_SETTINGS, MetronomeSettings);
#line 1 "/home/artem/metronome/src/Settings.vala"
	switch (property_id) {
#line 1 "/home/artem/metronome/src/Settings.vala"
		case METRONOME_SETTINGS_VOLUME_SEMIBREVE:
#line 1 "/home/artem/metronome/src/Settings.vala"
		g_value_set_double (value, metronome_settings_get_volume_semibreve (self));
#line 1 "/home/artem/metronome/src/Settings.vala"
		break;
#line 1 "/home/artem/metronome/src/Settings.vala"
		case METRONOME_SETTINGS_VOLUME_MINIM:
#line 1 "/home/artem/metronome/src/Settings.vala"
		g_value_set_double (value, metronome_settings_get_volume_minim (self));
#line 1 "/home/artem/metronome/src/Settings.vala"
		break;
#line 1 "/home/artem/metronome/src/Settings.vala"
		case METRONOME_SETTINGS_VOLUME_CROTCHET:
#line 1 "/home/artem/metronome/src/Settings.vala"
		g_value_set_double (value, metronome_settings_get_volume_crotchet (self));
#line 1 "/home/artem/metronome/src/Settings.vala"
		break;
#line 1 "/home/artem/metronome/src/Settings.vala"
		case METRONOME_SETTINGS_VOLUME_QUAVER:
#line 1 "/home/artem/metronome/src/Settings.vala"
		g_value_set_double (value, metronome_settings_get_volume_quaver (self));
#line 1 "/home/artem/metronome/src/Settings.vala"
		break;
#line 1 "/home/artem/metronome/src/Settings.vala"
		case METRONOME_SETTINGS_TEMPO:
#line 1 "/home/artem/metronome/src/Settings.vala"
		g_value_set_int (value, metronome_settings_get_tempo (self));
#line 1 "/home/artem/metronome/src/Settings.vala"
		break;
#line 1 "/home/artem/metronome/src/Settings.vala"
		case METRONOME_SETTINGS_BEAT:
#line 1 "/home/artem/metronome/src/Settings.vala"
		g_value_set_int (value, metronome_settings_get_beat (self));
#line 1 "/home/artem/metronome/src/Settings.vala"
		break;
#line 1 "/home/artem/metronome/src/Settings.vala"
		case METRONOME_SETTINGS_CUSTOM_SETTINGS:
#line 502 "Settings.c"
		{
			int length;
#line 1 "/home/artem/metronome/src/Settings.vala"
			g_value_set_boxed (value, metronome_settings_get_custom_settings (self, &length));
#line 507 "Settings.c"
		}
#line 1 "/home/artem/metronome/src/Settings.vala"
		break;
#line 511 "Settings.c"
		default:
#line 1 "/home/artem/metronome/src/Settings.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 1 "/home/artem/metronome/src/Settings.vala"
		break;
#line 517 "Settings.c"
	}
}


static void _vala_metronome_settings_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	MetronomeSettings * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, METRONOME_TYPE_SETTINGS, MetronomeSettings);
#line 1 "/home/artem/metronome/src/Settings.vala"
	switch (property_id) {
#line 1 "/home/artem/metronome/src/Settings.vala"
		case METRONOME_SETTINGS_VOLUME_SEMIBREVE:
#line 1 "/home/artem/metronome/src/Settings.vala"
		metronome_settings_set_volume_semibreve (self, g_value_get_double (value));
#line 1 "/home/artem/metronome/src/Settings.vala"
		break;
#line 1 "/home/artem/metronome/src/Settings.vala"
		case METRONOME_SETTINGS_VOLUME_MINIM:
#line 1 "/home/artem/metronome/src/Settings.vala"
		metronome_settings_set_volume_minim (self, g_value_get_double (value));
#line 1 "/home/artem/metronome/src/Settings.vala"
		break;
#line 1 "/home/artem/metronome/src/Settings.vala"
		case METRONOME_SETTINGS_VOLUME_CROTCHET:
#line 1 "/home/artem/metronome/src/Settings.vala"
		metronome_settings_set_volume_crotchet (self, g_value_get_double (value));
#line 1 "/home/artem/metronome/src/Settings.vala"
		break;
#line 1 "/home/artem/metronome/src/Settings.vala"
		case METRONOME_SETTINGS_VOLUME_QUAVER:
#line 1 "/home/artem/metronome/src/Settings.vala"
		metronome_settings_set_volume_quaver (self, g_value_get_double (value));
#line 1 "/home/artem/metronome/src/Settings.vala"
		break;
#line 1 "/home/artem/metronome/src/Settings.vala"
		case METRONOME_SETTINGS_TEMPO:
#line 1 "/home/artem/metronome/src/Settings.vala"
		metronome_settings_set_tempo (self, g_value_get_int (value));
#line 1 "/home/artem/metronome/src/Settings.vala"
		break;
#line 1 "/home/artem/metronome/src/Settings.vala"
		case METRONOME_SETTINGS_BEAT:
#line 1 "/home/artem/metronome/src/Settings.vala"
		metronome_settings_set_beat (self, g_value_get_int (value));
#line 1 "/home/artem/metronome/src/Settings.vala"
		break;
#line 1 "/home/artem/metronome/src/Settings.vala"
		case METRONOME_SETTINGS_CUSTOM_SETTINGS:
#line 565 "Settings.c"
		{
			gpointer boxed;
#line 1 "/home/artem/metronome/src/Settings.vala"
			boxed = g_value_get_boxed (value);
#line 1 "/home/artem/metronome/src/Settings.vala"
			metronome_settings_set_custom_settings (self, boxed, (boxed == NULL) ? 0 : g_strv_length (boxed));
#line 572 "Settings.c"
		}
#line 1 "/home/artem/metronome/src/Settings.vala"
		break;
#line 576 "Settings.c"
		default:
#line 1 "/home/artem/metronome/src/Settings.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 1 "/home/artem/metronome/src/Settings.vala"
		break;
#line 582 "Settings.c"
	}
}


static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}



